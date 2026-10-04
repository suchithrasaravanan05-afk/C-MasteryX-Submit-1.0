#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *arr;
    *max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}

int main() {
    int n, min, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); 
    }

    findMinMax(arr, n, &min, &max);

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
