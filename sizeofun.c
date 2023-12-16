#include<stdio.h>

union abc
{ 
int a;
char b; 
float c;
double d;
 };
int main() {
printf("Size of union abc is %lu", sizeof(union abc));
return 0; }
