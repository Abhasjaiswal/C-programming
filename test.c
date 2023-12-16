#include<stdio.h>

int main()
{
    char choice;
    float pi = 3.14;
    int s, radius, result;

    printf("a.Square\n");
    printf("b.Circle\n");
    scanf(" %c", &choice);

    if (choice == 'a')
    {
        printf("Enter the side");
        scanf("%d", &s);
        result = s * s;
        printf("The area of square is %d\n", result);
    }
    else if (choice == 'b')
    {
        printf("Enter the radius");
        scanf("%d", &radius);
        result = pi * radius * radius;
        printf("The area of circle is %f ", (float)result);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
