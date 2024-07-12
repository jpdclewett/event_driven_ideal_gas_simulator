#include "vectors/vectors.h"

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double Vector3lf_mag(Vector3lf *v) {
    double mag = 0;

    if (v != 0) {
        mag = sqrt(v->x*v->x + v->y*v->y + v->z*v->z);
    }

    return mag;
}

int Vector3lf_unit(Vector3lf *v, Vector3lf *unit) {
    double mag;

    if (v == NULL || unit == NULL) {
        fprintf(stderr, "Error calculating unit vector, v = %p, unit = %p\n"
                      , v, unit);
        return -1;
    }

    mag = Vector3lf_mag(v);
    
    *unit = *v;

    unit->x /= mag;
    unit->y /= mag;
    unit->z /= mag;

    return 0;
}

double Vector3lf_dot(Vector3lf *v1, Vector3lf *v2) {
    double dot = 0.0;

    if (v1 != NULL && v2 != NULL) {
        dot = v1->x*v2->x + v1->y*v2->y + v1->z*v2->z;
    }

    return dot;
}

void Vector3lf_cross(Vector3lf *v1, Vector3lf *v2, Vector3lf *cross) {
    Vector3lf lc;
    
    if (v1 == NULL || v2 == NULL || cross == NULL) {
        fprintf(stderr, "Error calculating the cross product, v1 = %p, v2 = %p, cross = %p\n"
                      , v1, v2, cross);
        return;
    }
    
    lc.x = v1->y * v2->z - v2->y * v1->z;
    lc.y = v1->z * v2->x - v2->z * v1->x;
    lc.z = v1->x * v2->y - v2->x * v1->y;
    
    *cross = lc;
    
    return;
}


