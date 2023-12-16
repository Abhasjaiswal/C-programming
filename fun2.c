#include <stdio.h>

int sum(int a, int b);

int main()
{
    int c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    int result = sum(c, d);
    printf("The sum of c and d is: %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    
    return a + b;
}
