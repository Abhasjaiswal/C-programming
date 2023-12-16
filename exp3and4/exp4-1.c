#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (int i = 1; i <= n; i++) {
        int originalNumber = i;
        int result = 0;
        int numDigits = 0;  // Initialize to 0

        // Calculate the number of digits
        while (originalNumber != 0) {
            numDigits++;
            originalNumber /= 10;
        }

        originalNumber = i;  // Reset original number

        // Calculate the Armstrong number
        while (originalNumber != 0) {
            int remainder = originalNumber % 10;
            result += pow(remainder, numDigits);
            originalNumber /= 10;
        }

        if (result == i) {
            printf("%d\n", i);
            count++;
        }
    }

    printf("Total Armstrong numbers between 1 and %d: %d\n", n, count);

    return 0;
}

