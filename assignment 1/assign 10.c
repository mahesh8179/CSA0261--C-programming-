#include <stdio.h>

int main() {
    int number, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to extract each digit and form the reversed number
    for (; number > 0; number /= 10) {
        digit = number % 10; // Extract the rightmost digit
        reverse = (reverse * 10) + digit; // Add the digit to the reversed number
    }

    printf("The reverse of the given number is: %d", reverse);

    return 0;
}
