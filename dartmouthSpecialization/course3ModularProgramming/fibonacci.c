#include <stdio.h>

int fibonacci(int);

int main(void){
    int n, fib;
    
    printf("Which Fibonacci number would you like: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("%d is not positive. Aborting\n", n);
    }
    else{
        fib = fibonacci(n);
    }
    printf("%d\n", fib);
    
    return 0;
}

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
