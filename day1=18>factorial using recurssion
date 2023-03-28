#include <stdio.h>

int fact(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, fact(num));

    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
