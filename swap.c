#include <stdio.h>

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

int main () {
    int a = 5, b = 3;

    swap(&a, &b);

    printf("a: %d b: %d", a, b);

    return 0;
}