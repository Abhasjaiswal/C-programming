#include <stdio.h>

int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++)
        if (array[i] == key)
            return i;
    return -1;
}

void deleteElement(int array[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index. Exiting.\n");
        return;
    }
    for (int i = index; i < *size - 1; i++)
        array[i] = array[i + 1];
    (*size)--;
}

int main() {
    int size = 0, myArray[100], choice, key, index;

    do {
        printf("\nMenu:\n1. Insert (Array size and input)\n2. Deletion\n3. Searching\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter array size: ");
                scanf("%d", &size);

                if (size <= 0 || size > 100) {
                    printf("Invalid size. Please enter a valid size (1 to 100).\n");
                    break;
                }

                printf("Enter array elements:\n");
                for (int i = 0; i < size; i++) {
                    printf("Enter element %d: ", i + 1);
                    scanf("%d", &myArray[i]);
                }
                break;

            case 2:
                printf("Enter element to delete: ");
                scanf("%d", &key);
                index = linearSearch(myArray, size, key);
                if (index != -1) {
                    deleteElement(myArray, &size, index);
                    printf("Element deleted.\n");
                } else {
                    printf("Element not found.\n");
                }
                break;

            case 3:
                printf("Enter number to search: ");
                scanf("%d", &key);
                index = linearSearch(myArray, size, key);
                if (index != -1)
                    printf("%d found at index %d\n", key, index);
                else
                    printf("%d not found.\n", key);
                break;

            case 4:
                printf("Exiting.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}