#include <stdio.h>

int main () {
    signed int a = -24;
    unsigned int b = 24;
    long int c = 2342L;
    short int d = 12342;

    printf("%d \n",a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%hd", d);
    return 0;
}