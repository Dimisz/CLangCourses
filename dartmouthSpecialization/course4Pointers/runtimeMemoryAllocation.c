#include <stdio.h>
#include <stdlib.h>

int main(void){
    int * intptr;
    double * doubleptr;
    
    intptr = (int *) malloc(sizeof(int));
    * intptr = 5;

    doubleptr = (double *) malloc(sizeof(double));
    * doubleptr = 9.0;
    
    
    return 0;
}
