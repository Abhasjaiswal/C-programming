#include <stdio.h>
#include <ctype.h> // for tolower function

int main() {
    char uppercaseString[100];

    printf("Enter an uppercase string: ");
    scanf("%s", uppercaseString);

    for (int i = 0; uppercaseString[i] != '\0'; i++) {
        uppercaseString[i] = tolower(uppercaseString[i]);
    }

    printf("Uppercase string converted to lowercase: %s\n", uppercaseString);

    return 0;
}
