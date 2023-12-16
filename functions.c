#include<stdio.h>

int sum(float a , float b); //Function Declaration
int main()
{
    float c , d;
    printf("Enter the first number\n");
    scanf("%f",&c);

    printf("Enter the second number\n");
    scanf("%f",&d);

   float s= sum(c,d); // Function call
   printf("%f\n",s);
}

int sum(float x, float y) // Function Definition
{
    return x+y;
}

