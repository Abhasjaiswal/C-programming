#include<stdio.h>
int add(int array[5]) 
{ 
  int sum = 0;
  for (int i = 0; i < 5; i++) 
  {
    sum += array[i];
  }
  return sum;
}
int main() {
  int arr[5] = {2,3,4,5,6};
  printf("Array sum is %d\n", add(arr)); 
  return 0;
}
