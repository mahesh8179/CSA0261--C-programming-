#include <stdio.h>

struct point {
    int x;
    int y;
};

struct circle {
    struct point center;
    float radius;
};

float area_of_circle(struct circle c) {
    return 3.14159 * c.radius * c.radius;
}

int main() {
    struct circle c = {{0, 0}, 2.5};  
    printf("Area of circle: %f\n", area_of_circle(c));
    return 0;
}

