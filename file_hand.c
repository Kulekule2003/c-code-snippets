#include <stdio.h>
#include <stdlib.h>


int main() {

    // file pointer to store the 
    // value return by fopen

    FILE* fptr;

    char data[50] = "okure enock is "
                    "the seed of Abraham";
    // opening the file in read mode
    fptr = fopen("okure.txt", "w");

    // checking if the file is 
    // open successfully

    if (fptr == NULL) {
        printf("the file is not opened");
    } else {
        printf("the file is created");

        fputs(data, fptr);

        fclose(fptr);
        printf("data successfully writen");
        


    }
    return 0;
}