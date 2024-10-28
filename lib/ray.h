#ifndef RAY_H
#define RAY_H

#include "vect3.h"

typedef struct {
    Vect3 origin;
    Vect3 direction;
} Ray;

Point RayAt(Ray r, double t) {
    return r.origin + t*r.direction; 
}

#endif
