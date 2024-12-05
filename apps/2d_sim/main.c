#include "context/context.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    printf("2d event-driven ideal-gas simulation.\n");

    const struct Context* context = Context_get();
    Context_initialise_experiment("experiments/test_simulation.json");

    return 0;
}