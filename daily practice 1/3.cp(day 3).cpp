#include <stdio.h>

void find_max_min(int arr[], int size, int *max, int *min);

int main() {
    int n, i, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    find_max_min(arr, n, &max, &min);

    printf("Maximum number among the given numbers = %d\n", max);
    printf("Minimum number among the given numbers = %d\n", min);

    return 0;
}

void find_max_min(int arr[], int size, int *max, int *min) {
    int i;

    *max = arr[0];
    *min = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}


