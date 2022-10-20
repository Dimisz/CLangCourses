#include <stdio.h>

int main(void){
    
    int a = 42;
    double d = 58.999;
    char c = 'r';
    
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    // dereferencing a pointer
    printf("and the value of a: %d\n", *addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    printf("and the value of d: %lf\n", *addressOfD);
    
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);
    printf("and the value of c: %c\n", *addressOfC);
    
    return 0;
}
