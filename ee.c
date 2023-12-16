#include <stdio.h>

void decrypt(char *message, int key) {
    char ch;
    int i;

    for(i = 0; message[i] != '\0'; ++i) {
        ch = message[i];

        if(ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - key + 26) % 26) + 'a';
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - key + 26) % 26) + 'A';
            message[i] = ch;
        }
    }
}

int main() {
    char message[] = "Iulgd Ndkor";
    int key = 3;

    decrypt(message, key);
    printf("%s\n", message);

    return 0;
}
