#include <stdio.h>

int main() {
    int number, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

   
    for (; number > 0; number /= 10) {
        digit = number % 10; 
        reverse = (reverse * 10) + digit; 
    }

    printf("The reverse of the given number is: %d", reverse);

    return 0;
}
