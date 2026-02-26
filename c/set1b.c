// set 1 question no 2
#include <stdio.h>

struct Student {
    int roll_no;
    char first_name[50];
    char last_name[50];
};


int main() {

    struct Student s1 = {101, "Ali", "Khan"};

    printf("Roll Number : %d\n", s1.roll_no);
    printf("First Name  : %s\n", s1.first_name);
    printf("Last Name   : %s\n", s1.last_name);

    return 0;
}