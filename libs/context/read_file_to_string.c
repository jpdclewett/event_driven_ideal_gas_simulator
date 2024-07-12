#include "read_file_to_string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

char* read_file_to_string(const char* path) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        fprintf(stderr, "Failed to open '%s' for reading (%s).\n", path, strerror(errno));
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    size_t length = (size_t)ftell(file);

    char* buffer = malloc(length + 1);
    if (buffer == NULL) {
        abort();
    }
    fseek(file, 0, SEEK_SET);
    size_t read_count = fread(buffer, 1, length, file);
    if (read_count != length) {
        fprintf(stderr, "Error: failed to read '%s' (%s).\n", path, strerror(errno));
        free(buffer);
        fclose(file);
        return NULL;
    }

    buffer[length] = '\0';
    fclose(file);
    return buffer;
}
