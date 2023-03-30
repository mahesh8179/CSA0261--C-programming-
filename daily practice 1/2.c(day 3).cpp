#include <stdio.h>

float diameter(float radius);
float circumference(float radius);
float area(float radius);

int main() {
    float radius, dia, circ, ar;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    dia = diameter(radius);
    circ = circumference(radius);
    ar = area(radius);

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units\n", ar);

    return 0;
}

float diameter(float radius) {
    return (2 * radius);
}

float circumference(float radius) {
    return (2 * 3.1416 * radius);
}

float area(float radius) {
    return (3.1416 * radius * radius);
}

