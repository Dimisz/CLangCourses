#include <stdio.h>

void setToZero(short **);
void printArray(short *, int);

int main(void){
    short a[3] = {1245, 1924, 234};
    short b[2] = {24, 256};
    
    printArray(a, 3);
    printArray(b, 2);
    short * t[2] = {a, b};
    setToZero(t);
    printArray(a, 3);
    printArray(b, 2);
    return 0;
}

void setToZero(short ** t){
    *(*t) = 0;
    *((*t) + 1) = 0;
    *((*t) + 2) = 0;
    
    *(*(t + 1)) = 0;
    *(*(t +1) + 1) = 0;
}

void printArray(short *arr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(arr + 1));
    }
    printf("\n");
}
