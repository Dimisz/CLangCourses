#include <stdio.h>

// structs declarations
struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double averageGrade;
};

//function prototypes
void printStudent(struct student);
void getStudent(struct student *);

int main(void){
    struct student me = {"Vladimir", "Solovyov", 1987, 3.5};
    struct student someone = {"John", "Doe", 1999, 4.4};
    
    printStudent(me);
    printStudent(someone);
    
    struct student learner;
    getStudent(&learner);
    
    printStudent(learner);
    return 0;
}

void getStudent(struct student *studentptr){
    printf("Enter student record:\n");
    printf("Enter first name: ");
    //scanf("%s", (*studentptr).firstName);
    scanf("%s", studentptr->firstName);
    printf("Enter last name: ");
    //scanf("%s", (*studentptr).lastName);
    scanf("%s", studentptr->lastName);
    printf("Enter birth year: ");
    //scanf("%d", &(*studentptr).birthYear);
    scanf("%d", &studentptr->birthYear);
    printf("Enter average grade: ");
    //scanf("%lf", &(*studentptr).averageGrade);
    scanf("%lf", &studentptr->averageGrade);
}

void printStudent(struct student st){
    printf("======================\n");
    printf("Student: %s %s\n", st.firstName, st.lastName);
    printf("Year of birth: %d\n", st.birthYear);
    printf("Average grade: %.1f\n", st.averageGrade);
    printf("======================\n");
}
