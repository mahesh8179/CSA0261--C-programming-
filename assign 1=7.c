#include <stdio.h>
#include <math.h>

int main() {
   int number, count;

   printf("Enter a number: ");
   scanf("%d", &number);

   // Count the number of digits without using a loop
   count = (int)log10(number) + 1;

   printf("The number of digits in the given integer is: %d", count);

   return 0;
}
