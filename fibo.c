#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

void generate_fibonacci_with_twist(int n) {
    int a = 1, b = 1, c;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            c = 1;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        
        if (c % 5 == 0 || is_prime(c)) {
            printf("0 ");
        } else {
            printf("%d ", c);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    
    generate_fibonacci_with_twist(n);

    return 0;
}
