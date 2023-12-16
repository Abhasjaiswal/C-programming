#include <stdio.h>

struct book {
    char name; // Use an array to store the name
    float price;
    int pages;
};

struct book b[3];

int main() {
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name, price, and pages: ");
        fflush(stdin);
        
        // Use %s to read a string into the name array
        scanf("%s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    for (i = 0; i < 3; i++) {
        printf("%s %f %d\n", &b[i].name, b[i].price, b[i].pages);
    }

    return 0;
}

