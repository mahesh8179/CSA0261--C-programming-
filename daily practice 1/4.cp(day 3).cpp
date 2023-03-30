#include <stdio.h>
void checkEvenOdd(int N)
{
    int r = N % 2;
    if (r == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
 
int main()
{
    int N = 101;
    checkEvenOdd(N);
   return 0;
}
