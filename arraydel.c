#include <stdio.h>

#define MAX_SIZE 100

// Function to display the array
void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete an element from the start of the array
void deleteAtStart(int arr[], int *size) {
    if (*size > 0) {
        for (int i = 0; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element deleted from the start.\n");
        displayArray(arr, *size);
    } else {
        printf("Array is empty, cannot delete element.\n");
    }
}

// Function to delete an element from the end of the array
void deleteAtEnd(int arr[], int *size) {
    if (*size > 0) {
        (*size)--;
        printf("Element deleted from the end.\n");
        displayArray(arr, *size);
    } else {
        printf("Array is empty, cannot delete element.\n");
    }
}

// Function to delete an element from a specific index in the array
void deleteAtIndex(int arr[], int *size, int index) {
    if (*size > 0 && index >= 0 && index < *size) {
        for (int i = index; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element deleted from index %d.\n", index);
        displayArray(arr, *size);
    } else {
        printf("Invalid index or array is empty, cannot delete element.\n");
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array ");
    scanf("%d", &size);

    // Check if the entered size is within the valid range
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Exiting program.\n");
        return 1;
    }

    int arr[MAX_SIZE];
    int choice, index;

    // Take array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n1. Delete from start\n2. Delete from end\n3. Delete from index\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deleteAtStart(arr, &size);
                break;
            case 2:
                deleteAtEnd(arr, &size);
                break;
            case 3:
                printf("Enter index to delete from: ");
                scanf("%d", &index);
                deleteAtIndex(arr, &size, index);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
