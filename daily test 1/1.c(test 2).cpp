#include <stdio.h>

int isComposite(int num);

int main() {
    int arr[15], i;
    
    for (i = 0; i < 15; i++) {
        arr[i] = i+1;
    }
    
    printf("Composite numbers in the array: ");
    for (i = 0; i < 15; i++) {
        if (isComposite(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}

int isComposite(int num) {
    int i, count = 0;
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    
    if (count > 2) {
        return 1;
    } else {
        return 0;
    }
}

