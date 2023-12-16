#include<stdio.h>

int main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);

    while (n!=0)
    {
        if (n<0)
        {
            break;
        }
        printf("Enter an integer:\n");
        scanf("%d",&n);
        
    }
    printf("You have entered n as negative integer /zero");

}
