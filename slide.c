#include <stdio.h>

// Function declaration
void display(struct book b);

struct book
{
    char name[25];
    char author[25];
    int callno;
};

int main()
{
    struct book b1 = {"Hello", "ABC", 101};
    display(b1);
    return 0;
}

// Function definition
void display(struct book b)
{
    printf("\n%s %s %d", b.name, b.author, b.callno);
}

