#ifndef COLOR_H
#define COLOR_H

#include "vect3.h"

#include <stdio.h>

typedef Vect3 Color;

void ColorWrite(FILE* fd, Color pixel_color) {
    double r = pixel_color.x;
    double g = pixel_color.y;
    double b = pixel_color.z;

    int rbyte = (int)(255.999 * r);
    int gbyte = (int)(255.999 * g);
    int bbyte = (int)(255.999 * b);

    fprintf(fd, "%d %d %d\n", rbyte, gbyte, bbyte);
}

#endif
