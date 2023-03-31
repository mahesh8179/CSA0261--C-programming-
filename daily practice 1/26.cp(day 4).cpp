#include <stdio.h>

union myunion {
    int i;
    float f;
};

int main() {
    union myunion u1 = {.i = 42};
    printf("Value of u1.i: %d\n", u1.i);
    u1.f = 3.14;
    printf("Value of u1.f: %.2f\n", u1.f);
    return 0;
}

