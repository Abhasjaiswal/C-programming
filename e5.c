#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minimum = findMin(arr, size);
    printf("The minimum element is: %d\n", minimum);
    return 0;
}
