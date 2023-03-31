#include <stdio.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct person p1 = {"John Smith", 30, 1.75};
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);
    return 0;
}

