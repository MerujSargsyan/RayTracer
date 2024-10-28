#include <vect3.h>
#include <color.h>

int main() {
    int image_width = 256;
    int image_height = 256;

    printf("P3\n");
    printf("%d %d\n255\n", image_width, image_height);

    for(int j = 0; j < image_height; j++) {
        fprintf(stderr, "\rScans remaining: %d", image_height - j);
        fflush(stderr);
        for(int i = 0; i < image_width; i++) {
            double r = (double)i / (image_width - 1);
            double g = (double)j / (image_height - 1);

            Color c = (Color){r, g, 0.0};
            ColorWrite(stdout, c);
        }
    }

    fprintf(stderr, "\n");

    return 0;
}
