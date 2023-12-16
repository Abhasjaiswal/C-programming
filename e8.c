#include <stdio.h>

void counting(int k);

int main() {
    counting(1);
    return 0;
}

void counting(int k) {
    if (k <= 10) {
        printf("%d\n", k);
        counting(k + 1);
    }
}

