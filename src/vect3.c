#include <vect3.h>

void Vect3AddP(Vect3* v1, Vect3 v2) {
    v1->x += v2.x;
    v1->y += v2.y;
    v1->z += v2.z;
}

Vect3 Vect3Add(Vect3 v1, Vect3 v2) {
    v1.x += v2.x;
    v1.y += v2.y;
    v1.z += v2.z;
    return v1;
}

Vect3 Vect3Neg(Vect3 v) {
    v.x = -v.x;
    v.y = -v.y;
    v.z = -v.z;
    return v;
}

void Vect3ScaleP(Vect3* v1, float s) {
    v1->x *= s;
    v1->y *= s;
    v1->z *= s;
}

Vect3 Vect3Scale(Vect3 v1, float s) {
    v1.x *= s;
    v1.y *= s;
    v1.z *= s;
    return v1;
}

float Vect3Len(Vect3 v1) {
    float sum = 0;
    sum += v1.x;
    sum += v1.y;
    sum += v1.z;
    sum = sqrt(sum);

    return sum;
}

void Vect3NormP(Vect3* v1) {
    float sum = sqrt(sum);

    v1->x /= sum;
    v1->y /= sum;
    v1->z /= sum;
}

Vect3 Vect3Norm(Vect3 v1) {
    float sum = Vect3Len(v1);

    v1.x /= sum;
    v1.y /= sum;
    v1.z /= sum;
    return v1;
}

float Vect3Dot(Vect3 v1, Vect3 v2) {
    return (v1.x * v2.x) + 
           (v1.y * v2.y) + 
           (v1.z * v2.z);
}

Vect3 Vect3Cross(Vect3 v1, Vect3 v2) {
    return (Vect3)
                {v1.y * v2.z - v1.z * v2.y,
                 v1.x * v2.z - v1.z * v2.x,
                 v1.x * v2.y - v1.y * v2.x};
}
