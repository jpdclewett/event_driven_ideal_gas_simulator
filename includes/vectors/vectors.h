#ifndef VECTORS_H
#define VECTORS_H

typedef struct {
    double x;
    double y;
    double z;
} Vector3lf;

typedef struct {
    int x;
    int y; 
    int z;
} Vector3i;

double Vector3lf_mag(Vector3lf *v);
int Vector3lf_unit(Vector3lf *v, Vector3lf *unit);
double Vector3lf_dot(Vector3lf *v1, Vector3lf *v2);
void Vector3lf_cross(Vector3lf *v1, Vector3lf *v2, Vector3lf *cross);

#endif // VECTORS_H
