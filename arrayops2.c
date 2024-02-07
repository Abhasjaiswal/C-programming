#include <stdio.h>

#define MAX_SIZE 10

// Function to display the array
void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at the start of the array
void insertAtStart(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        for (int i = *size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        (*size)++;
        printf("Element %d inserted at the start.\n", element);
        displayArray(arr, *size);
    } else {
        printf("Array is full, cannot insert element.\n");
    }
}

// Function to insert an element at the end of the array
void insertAtEnd(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        arr[*size] = element;
        (*size)++;
        printf("Element %d inserted at the end.\n", element);
        displayArray(arr, *size);
    } else {
        printf("Array is full, cannot insert element.\n");
    }
}

// Function to insert an element at a specific index in the array
void insertAtIndex(int arr[], int *size, int element, int index) {
    if (*size < MAX_SIZE && index >= 0 && index <= *size) {
        for (int i = *size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        (*size)++;
        printf("Element %d inserted at index %d.\n", element, index);
        displayArray(arr, *size);
    } else {
        printf("Invalid index or array is full, cannot insert element.\n");
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
    int choice, element, index;

    // Take array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n1. Insert at start\n2. Insert at end\n3. Insert at index\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert at the start: ");
                scanf("%d", &element);
                insertAtStart(arr, &size, element);
                break;
            case 2:
                printf("Enter element to insert at the end: ");
                scanf("%d", &element);
                insertAtEnd(arr, &size, element);
                break;
            case 3:
                printf("Enter index to insert at: ");
                scanf("%d", &index);
                printf("Enter element to insert at index %d: ", index);
                scanf("%d", &element);
                insertAtIndex(arr, &size, element, index);
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
