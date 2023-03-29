#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    for (; number > 0; number /= 10) {
        digit = number % 10; 
        sum += digit; 
    }

    printf("The sum of digits of the given number is: %d", sum);

    return 0;
}
