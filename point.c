#include <stdio.h>

int main () {

    int x = 3, y = 5;

    int *p;

    p = &x;
    p = &y;

    *p = *p+1;
    *p += 1;


    printf("%d",*p);

    ++*p;
    
    printf(" %d", y);

    return 0;
}
