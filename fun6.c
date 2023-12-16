#include<stdio.h>

void average(float a , float b, float c, float d , float e );

int main()
{
    int a , b , c, d , e;
    printf("Enter the five numbers");
    scanf("%d %d %d %d %d", &a , &b, &c, &d, &e);
    average(a,b,c,d,e);
}

void average(float a , float b , float c, float d, float e )
{
    float total = a+b+c+d+e;
    float average = total/5;
    printf("The average of the number is %f",average);
}


