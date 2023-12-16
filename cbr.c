#include <stdio.h>

struct book
{
    char name[25];
    char author[25];
    int callno;
};

// Function declaration
void display(struct book *b);

int main()
{
    struct book b1 = {"Hello", "ABC", 101};
    display(&b1); // Pass a pointer to b1
    return 0;
}

// Function definition
void display(struct book *b)
{
    printf("\n%s %s %d", b->name, b->author, b->callno);
}
