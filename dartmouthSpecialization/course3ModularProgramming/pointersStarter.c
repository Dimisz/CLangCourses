#include <stdio.h>

int main(void){
    
    int a = 42;
    double d = 58.999;
    char c = 'r';
    
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    printf("and the value of a: %d\n", *addressOfA);
    
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    printf("and the value of d: %lf\n", *addressOfD);
    
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);
    printf("and the value of c: %c\n\n", *addressOfC);
    
    //pointer operations
    * addressOfA = 32;
    printf("address of a: %p\n", addressOfA);
    printf("and the value of a: %d\n\n", *addressOfA);
    
    * addressOfA = * addressOfA + 1;
    printf("address of a: %p\n", addressOfA);
    printf("and the value of a: %d\n", *addressOfA);
    return 0;
}
