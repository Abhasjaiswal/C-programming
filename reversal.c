#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int temp;
    for (i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);

    return 0;
}
