#include <stdio.h>

void evenodd(int n); 

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    evenodd(a);
    return 0; 
}

void evenodd(int n) {
    if (n % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}
