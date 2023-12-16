#include<stdio.h>
#include<string.h>

int main()
{
    char greeting[]="Hello";
    char name[]="Allice";
    strcat(greeting,name); //concatenate name to greeting
    printf("Greetings: %s\n",greeting);
    return 0;
