
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "context/context.h"

#include "core_json.h"
#include "read_file_to_string.h"

static struct Context context;

static void set_default_values(void) {

    context = (struct Context) {
        .number_of_particles = 0,
        .particles = NULL,
        .particle_linked_list = NULL,
        .number_of_walls = 0,
        .walls = NULL,
    };
}

static const char* lookup_member(const char* buffer, size_t length, const char* name, size_t* out_length) {
    const char* value;
    size_t value_length;
    JSONStatus_t status = JSON_SearchConst(buffer, length, name, strlen(name), &value, &value_length, NULL);
    if (status == JSONSuccess) {
        *out_length = value_length;
        return value;
    } else {
        return NULL;
    }
}

static void parse_experiment_setup() {
    // Stub
}

static const char* json_status_to_string(JSONStatus_t status) {
    switch (status) {
    case JSONPartial: return "CONFIG ERROR: JSON document is valid so far but incomplete.";
    case JSONSuccess: return "CONFIG ERROR: JSON document is valid and complete.";
    case JSONIllegalDocument: return "CONFIG ERROR: JSON document is invalid or malformed.";
    case JSONMaxDepthExceeded: return "CONFIG ERROR: JSON document has nesting that exceeds JSON_MAX_DEPTH.";
    case JSONNotFound: return "CONFIG ERROR: Query key could not be found in the JSON document.";
    case JSONNullParameter: return "CONFIG ERROR: Pointer parameter passed to a function is NULL.";
    case JSONBadParameter: return "CONFIG ERROR: Query key is empty, or any subpart is empty, or max is 0.";
    }
    abort();
}

static bool parse_config_json(const char* buffer) {
    size_t length = strlen(buffer);

    size_t start = 0;
    size_t next = 0;

    const char* nodes_block = 0;
    size_t nodes_block_length = 0;

    while (true) {
        JSONPair_t out;
        JSONStatus_t status = JSON_Iterate(buffer, length, &start, &next, &out);
        if (status == JSONSuccess) {
            //parse_parameters(&context, &out);;
        } else if (status == JSONNotFound) {
            // No more key-value pairs to find.
            return false;
        } else {
            fprintf(stdout, "%s\n", json_status_to_string(status));
            return false;
        }
    }
}

bool Context_initialise_experiment(const char* experiment_name) {
    set_default_values();

    char experiment_config_file_name[256];
    snprintf(experiment_config_file_name, 256, "%s", experiment_name);
    char* buffer = read_file_to_string(experiment_config_file_name);
        if (buffer == NULL) {
        return false;
    }

    bool parsed_ok = parse_config_json(buffer);
    free(buffer);
    return parsed_ok;
}

const struct Context* Context_get(void) {
    return &context;
}









