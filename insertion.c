#include <stdio.h>
// Function to perform linear search
int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int myArray[size];

    printf("Enter %d integers to insert into the array:\n", size);

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Elements in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

     int key;
    printf("\nEnter a number to search: ");
    scanf("%d", &key);

    // Perform linear search
    int index = linearSearch(myArray, size, key);

    // Display the search result
    if (index != -1) {
        printf("%d found at index %d\n", key, index);
    } else {
        printf("%d not found in the array\n", key);
    }

    return 0;
}


