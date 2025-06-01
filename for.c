#include <stdio.h>

#define LOW 0
#define HIGH 300
#define STEP 20

int main () {
    int fahr;
    for (fahr=HIGH; fahr>=LOW; fahr = fahr - STEP)
        printf("%3d %6.2f \n",fahr, (5.0/9.0)*(fahr-32));
    return 0;
}