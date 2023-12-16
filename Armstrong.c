#include<stdio.h>
#include<math.h>

void armstrong (int num)
{
    int originalnumber, remainder, result=0,n=0;

    originalnumber=num;

    while(originalnumber!=0)
    {
        originalnumber /= 10;
        ++n;
        
    }
    originalnumber=num;
    while (originalnumber!=0)
    {
        remainder=originalnumber%10;
        result+=pow(remainder,n);
        originalnumber/=10; 
    }
    if (result==num)
    {
        printf("%d is an Armstrong number\n",num);
    }
    else
    {
        printf("%d is not an Armstron number\n",num);
    }
}  
    int main()
    {
        int num;
        printf("Enter a number");
        scanf("%d",&num);
        armstrong(num);
        return 0;
    }
    
    
    
