#include <stdio.h>

int main(void){
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];
    
    printf("char: %zu\n", sizeof(char));
    printf("int: %zu\n", sizeof(int));
    printf("double: %zu\n", sizeof(double));
    printf("char listChar[3]: %zu\n", sizeof(listChar));
    printf("int listInt[3]: %zu\n", sizeof(listInt));
    printf("double listDouble[3]: %zu\n", sizeof(listDouble));
    
    return 0;
}
