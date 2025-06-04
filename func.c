#include <stdio.h>

void hello() {
    printf("hello world;\n");
}

int three() {
    int n = 3;
    return n;
}

int four() {
    int n = 4;
    return n;
}

int main () {
    int num = four();
    hello();
    printf("%d \n %d ", three(), num);
    return 0;
}