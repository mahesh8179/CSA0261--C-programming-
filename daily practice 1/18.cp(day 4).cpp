#include <stdio.h>
#include <math.h>

// Define the point structure
struct Point {
    int x;
    int y;
};

struct Circle {
    float radius;
    struct Point center;
};

float area_of_circle(struct Circle circle) {
    float area = M_PI * circle.radius * circle.radius;
    return area;
}

int main() {
    
    struct Circle my_circle = {2.5, {0, 0}};
    
    float area = area_of_circle(my_circle);
    
    printf("Area of the circle: %f\n", area);
    
    return 0;
}

