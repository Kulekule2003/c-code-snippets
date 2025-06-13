#include <stdio.h>
#include <stdlib.h>


int main() {

    // file pointer to store the 
    // value return by fopen

    FILE* fptr;

    // opening the file in read mode
    fptr = fopen("okure.txt", "w");

    // checking if the file is 
    // open successfully

    if (fptr == NULL) {
        printf("the file is not opened");
    } else {
        printf("the file is created");
    }
    return 0;
}