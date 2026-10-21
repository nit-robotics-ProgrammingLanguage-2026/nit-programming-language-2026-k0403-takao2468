#include <stdio.h>

int main(void) {
    int i;
    int result;

    scanf("%d", &i);

    result = (int)(i * 1.08);

    printf("%d", result);

    return 0;
}