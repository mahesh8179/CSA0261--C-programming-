#include <stdio.h>

int main() {
    int num1, num2, count = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }

    printf("The number of integers divisible by 5 between %d and %d is %d", num1, num2, count);
    return 0;
}
