#include <vect3.h>
#include <color.h>
#include <ray.h>

int main() {
    int image_width = 400;
    int image_height;
    float aspect_ratio = 16.0f/9.0f;

    image_height = (int)(9.0f * image_width/ 16.0f);
    if(image_height < 1) image_height = 1;

    printf("P3\n");
    printf("%d %d\n255\n", image_width, image_height);

    for(int j = 0; j < image_height; j++) {
        fprintf(stderr, "\rScans remaining: %d", image_height - j);
        fflush(stderr);
        for(int i = 0; i < image_width; i++) {
            float r = (float)i / (image_width - 1);
            float g = (float)j / (image_height - 1);

            Color c = (Color){r, g, 0.0};
            ColorWrite(stdout, c);
        }
    }

    fprintf(stderr, "\n");

    return 0;
}
