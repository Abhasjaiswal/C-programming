#include <stdio.h>

int main() {
    char encoded[] = "Mfpobsep!eb!Wjodj";

    for (int i = 0; encoded[i] != '\0'; i++) {
        char decoded = encoded[i] - 1;
        printf("%c", decoded);
    }

    printf("\n");

    return 0;
}