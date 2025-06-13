#include <stdio.h>
#include <stdlib.h>

//global variable 

int gvar = 66;

// constant global variable
const int cgvar = 1010;

// unitialized global variable
int ugvar;

void foo() {

    //local variable
    int lvar = 1;
    printf("Address of lvar: \t %p", (void*)&lvar);
}

int main() {

    //heap variable

    int *hvar = (int *)malloc(sizeof(int));

    printf("Address of foo:\t\t%p\n", (void*)&foo);
    printf("Address of cgvar:\t%p\n", (void*)&cgvar);
    printf("Address of gvar:\t%p\n", (void*)&gvar);
    printf("Address of ugvar:\t%p\n", (void*)&ugvar);
    printf("Address of hvar:\t%p\n", (void*)hvar);

    foo();
    

    return 0;
}