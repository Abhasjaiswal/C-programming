#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    while (n!=0)
    {
         printf("Enter the number\n");
          scanf("%d",&n);
    }
    printf("You are out of the loop");
}
