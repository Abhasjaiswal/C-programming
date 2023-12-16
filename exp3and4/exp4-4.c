#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    do {
        remainder = num % 10;       // Get the last digit of num
        reversedNum = reversedNum * 10 + remainder; // Append it to reversedNum
        num /= 10;                  // Remove the last digit from num
    } while (num > 0);

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}


