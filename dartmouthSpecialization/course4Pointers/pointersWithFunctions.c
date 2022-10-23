#include <stdio.h>
void timesTwo(int);
void timesTwoPtr(int *);

int main(void){
    int n;
    printf("Passing value to a function by value...\n");
    printf("Please enter an integer: ");
    scanf("%d", &n);
    
    printf("In main: The value of n is %d.\n", n);
    timesTwo(n);
    printf("In main: The value of n is %d.\n\n", n);
    
    printf("=================================\n");
    printf("Passing value to a function by address...\n");
    printf("Please enter an integer: ");
    scanf("%d", &n);
    
    printf("In main: The value of n is %d.\n", n);
    timesTwoPtr(&n);
    printf("In main: The value of n is %d.\n", n);
    return 0;
}

void timesTwo(int num){
    printf("In the function: the number is %d.\n", num);
    num = num * 2;printf("In the function: the number is %d.\n", num);
}

void timesTwoPtr(int * num){
    printf("In the function: the number is %d.\n", *num);
    *num = *num * 2;
    printf("In the function: the number is %d.\n", *num);
}
