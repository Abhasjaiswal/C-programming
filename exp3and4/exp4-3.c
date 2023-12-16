#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive number (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers in the specified range.\n");
        return 0;
    }

    printf("Prime numbers between 1 and %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;  // Assume i is prime

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // i is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

