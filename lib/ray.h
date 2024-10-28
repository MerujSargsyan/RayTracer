#ifndef RAY_H
#define RAY_H

#include "vect3.h"

typedef struct {
    Vect3 origin;
    Vect3 direction;
} Ray;

Point RayAt(Ray r, float t) {
    return Vect3Add(r.origin, Vect3Scale(r.direction, t)); 
}

#endif
