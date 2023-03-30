#include <stdio.h>

int main() {

    int a, b, temp;
    int *ptr1, *ptr2;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping a = %d and b = %d", a, b);
    ptr1 = &a;
    ptr2 = &b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
 printf("\nAfter swapping a = %d and b = %d", a, b);
 return 0;

}
