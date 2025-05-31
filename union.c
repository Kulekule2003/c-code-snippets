#include <stdio.h>

union student {
    int age;
    char marks;
} s;

int main () {
    s.age = 12;
    s.marks = 50;

    printf("age: %d \n", s.age);
    printf("marks: %d", s.marks);

    return 0;
}