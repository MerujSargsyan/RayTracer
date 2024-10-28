#ifndef VECT3_H
#define VECT3_H
#include <math.h>

typedef struct {
    float x;
    float y;
    float z;
} Vect3;

typedef Vect3 Point;

// NOTE: Ending of P implies in place operation

void Vect3AddP(Vect3* v1, Vect3 v2);
Vect3 Vect3Add(Vect3 v1, Vect3 v2);

Vect3 Vect3Neg(Vect3 v);

void Vect3ScaleP(Vect3* v1, float s);
Vect3 Vect3Scale(Vect3 v1, float s);

float Vect3Len(Vect3 v1);

void Vect3NormP(Vect3* v1);
Vect3 Vect3Norm(Vect3 v1);

float Vect3Dot(Vect3 v1, Vect3 v2);
Vect3 Vect3Cross(Vect3 v1, Vect3 v2);

#endif
