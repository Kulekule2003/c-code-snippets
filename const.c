#include <stdio.h>

int main (){
    //a const keyword defines a variable whose value cannot be changed

    const int a = 11;

    a = a + 2;
    
    printf("%d", a);
    
    return 0;
}