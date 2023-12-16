#include<stdio.h>

int main()
{
    int n;
    printf("Enter an interger:\n");
    scanf("%d",&n);

    while (n!=0)
    {
        printf("Enter an interger:\n");
        scanf("%d",&n);
    }
    printf("You are out of the loop");
}
