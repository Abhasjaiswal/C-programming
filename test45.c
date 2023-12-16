#include <stdio.h>

int main() {
    int a, b;
    char choice;

    do {
        printf("Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice >= '1' && choice <= '5') {
            printf("Enter the values of a and b: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case '1':
                printf("Addition of %d and %d is %d\n", a, b, a + b);
                break;
            case '2':
                printf("Subtraction of %d and %d is %d\n", a, b, a - b);
                break;
            case '3':
                printf("Multiplication of %d and %d is %d\n", a, b, a * b);
                break;
            case '4':
                if (b != 0) {
                    printf("Division of %d by %d is %lf\n", a, b, (double)a / b);
                } else {
                    printf("Division by zero is not allowed.\n");
                }
                break;
            case '5':
                if (b != 0) {
                    printf("Modulus of %d and %d is %d\n", a, b, a % b);
                } else {
                    printf("Modulus by zero is not allowed.\n");
                }
                break;
            case '6':
                printf("Calculator exiting. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '6');

    return 0;
}
