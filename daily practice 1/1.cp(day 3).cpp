#include <stdio.h>
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int cubeNum = cube(num);

    printf("Cube of %d is %d", num, cubeNum);

    return 0;
}


