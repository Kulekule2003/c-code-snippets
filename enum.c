#include <stdio.h>

enum cars {Tesla, ford , byd, mercedes, audi, kira};
enum heros {superman, ironman, spiderman, captainAmerica};
int main () {
    
    // object of the enum (week), called day
    enum cars mycar;
    mycar = ford;

    enum heros strongest;
    strongest = spiderman;

    printf("%d \n", mycar);
    printf("%d", strongest);
    return 0;
}