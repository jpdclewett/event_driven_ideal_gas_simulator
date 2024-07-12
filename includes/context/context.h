#ifndef CONTEXT_H
#define CONTEXT_H

#include "particles/particles.h"
#include "walls/walls.h"

#include <stdbool.h>
#include <stddef.h>

struct Context {
    size_t number_of_particles;
    struct Particles* particles;
    size_t* particle_linked_list;
    size_t number_of_walls;
    struct Walls* walls;
};

const struct Context* Context_get(void);
bool Context_initialise_experiment(const char* experiment_name);

#endif // CONTEXT_H