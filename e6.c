#include<stdio.h>
int greatest(int []);
int n;
int main()
{
    int a[5],num,i;
    printf(" Input elements in the array");
       for(i=0;i<5;i++)
        {
	      scanf("%d",&a[i]);
	    }
    num=greatest(a);

    printf(" The largest element is : %d",num);
    return 0;
}
int greatest(int b[])
{
    int i=1,num1;
    num1=b[0];
    while(i < 5)
	{
      if(num1<b[i])
           num1=b[i];
      i++;
    }
    return num1;
}