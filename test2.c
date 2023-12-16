#include<stdio.h>

int x=20; //Global Variable

int main()
{
    int x= 24;
    {
        extern int x;
        printf("Value of Global Variable is %d\n",x);
    }
    printf("Value of local variable is %d\n",x);
}
