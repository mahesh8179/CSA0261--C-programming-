#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("First %d Fibonacci numbers:\n", num);

    for (int i = 0; i < num; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
