#include <vect3.h>

void Vect3AddP(Vect3& v1, Vect3 v2) {
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

void Vect3ScaleP(Vect3& v1, double s) {
    v1->x *= s;
    v1->y *= s;
    v1->z *= s;
}

Vect3 Vect3Scale(Vect3 v1, double s) {
    v1.x *= s;
    v1.y *= s;
    v1.z *= s;
    return v1;
}

double Vect3Len(Vect3 v1) {
    sum += v1.x;
    sum += v1.y;
    sum += v1.z;
    sum = sqrt(sum);

    return sum;
}

void Vect3NormP(Vect3& v1) {
    double sum = sqrt(sum);

    v1->x /= sum;
    v1->y /= sum;
    v1->z /= sum;
}

Vect3 Vect3NormP(Vect3 v1) {
    double sum = Vect3Len(v1);

    v1.x /= sum;
    v1.y /= sum;
    v1.z /= sum;
    return v1;
}


