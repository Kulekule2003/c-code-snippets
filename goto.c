#include <stdio.h>

int main () {
    int n = 1;

    epl:
        printf(" %d ", n);
        n++;

        if (n<10) goto epl ;
    return 0;
}