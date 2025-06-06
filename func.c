#include <stdio.h>


void printVal(int num, float real) {
    printf("%d %f \n", num, real);
}
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
    int a = 3;
    int num = four();
    hello();
    printf("%d \n %d\n ", three(), num);

    printVal(a, 1.5);

    return 0;
}