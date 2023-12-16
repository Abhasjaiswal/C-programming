#include<stdio.h>
#define a 45
#define add(x,y) x+y
#define greater(x,y) if (x>y) \
    printf("X is greater than Y"); \
else \
    printf("X is smaller than Y"); 



int main()
{
    printf("%d\n",a);
    printf("%d\n",add(3,4));
    greater(8,7);
    return 0;

}

