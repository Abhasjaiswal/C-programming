#include <stdio.h>

void printPattern1() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPattern2() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("Choose a pattern to print:\n");
        printf("1. Pattern 1 (Pyramid of asterisks)\n");
        printf("2. Pattern 2 (Number triangle)\n");
        printf("3. Quit\n");
        printf("Enter your choice (1/2/3): ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printPattern1();
                break;
            case 2:
                printPattern2();
                break;
            case 3:
                printf("Quitting\n");
                return 0;
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}

