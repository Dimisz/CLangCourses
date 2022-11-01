#include <stdio.h>

struct student{
    char firstName[5];
    char lastName[5];
    int birthYear;
    double avgGrade;
};

int main(void){
    struct student me;
    printf("Size of struct student is %zu.\n", sizeof(struct student));
    printf("Size of first name is: %zu.\n", sizeof(me.firstName));
    printf("Size of last name is: %zu.\n", sizeof(me.lastName));
    printf("Size of birth year is: %zu.\n", sizeof(me.birthYear));
    printf("Size of average grade is: %zu.\n", sizeof(me.avgGrade));
    
    return 0;
}
