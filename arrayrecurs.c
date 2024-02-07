#include <stdio.h>

// Function to calculate the sum of array elements using recursion
int array_sum(int arr[], int n) {
    // Base case: if the array is empty, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum the current element with the sum of the rest of the array
        return arr[n - 1] + array_sum(arr, n - 1);
    }
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum using the array_sum function
    int sum = array_sum(arr, n);

    // Display the result
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
