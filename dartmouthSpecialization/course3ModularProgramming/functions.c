#include <stdio.h>


int sum(int, int);

int main(void){
    int a, b;
    int result;
    
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("You entered %d and %d.\n", a, b);
    
    result = sum(a, b);
    printf("Result of the sum = %d.\n", result);
    
    return 0;
}

int sum(int a, int b){
    return a + b;
}
