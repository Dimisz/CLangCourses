#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *a;
    a = (int *) malloc(sizeof(int));
    *a = 1;
    
    printf("I stored %d at memory location %p.\n", *a, a);
    
    free(a);
    // after freeing the memory the value MAY remain in the same place
    // or MAY NOT
    printf("After freeing the memory of a...\n");
    printf("I stored %d at memory location %p.\n", *a, a);
    
    return 0;
}
