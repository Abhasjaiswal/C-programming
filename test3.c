#include<stdio.h>

void function()
{
    int x = 20; // Local Variable
    static int y = 30;
    x += 10;
    y += 10;
     printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}
int main()
{
    printf("First Call\n");
    function();
    printf("Second Call\n");
    function();
    printf("Third Call\n");
    function();
    return 0;
}
