#include <stdio.h>

int main() {
    int i = 2;

    //using switch statement
    switch (i) {
    case 1:
        printf("case 1");
        break;
    case 2:
        printf("case 2");
        break;
    case 3:
        printf("case 3");
        break;
    case 4:
        printf("case 4");
        break;
    default:
        printf("Default");
        break;
    }

    return 0;
}