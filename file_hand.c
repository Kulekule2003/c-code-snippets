#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE* fptr;

    char data[50] = "GeeksforGeeks-A Computer "
                    "Science Portal for Geeks";

    fptr = fopen("ok.txt", "w");

    if (fptr == NULL) {
        printf("file.txt file failed to open");
    } else {
        printf("The file is now opened.\n");
        fputs(data, fptr);
        fputs("\n", fptr);
        fseek(fptr, -6, SEEK_END);

        fputs("okurenock", fptr);
        fclose(fptr);
    }
    return 0;
}