#include <stdio.h>

int main() {
    int num1, num2;
    int result = 0;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Multiply num1 and num2 without using multiplication operator
    for (int i = 0; i < num2; i++) {
        result += num1;
    }

    // Display the result
    printf("%d * %d = %d\n", num1, num2, result);

    return 0;
}

