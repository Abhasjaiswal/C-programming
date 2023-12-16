#include <stdio.h>

int main() {
    char input[100];  // Assuming the input won't exceed 100 characters

    printf("Enter a character or number: ");
    fgets(input, sizeof(input), stdin);

    printf("You entered: %s", input);

    return 0;
}