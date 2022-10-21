#include <stdio.h>

void reset(int []);
void printArray(int *);

int main(void){
    int arr[3] = {15, 16, 17};
    printf("Before reset:\n");
    printArray(arr);
    
    reset(arr);
    printf("After reset:\n");
    printArray(arr);
    
    return 0;
}

void reset(int ptr[]){
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
}

void printArray(int * ptr){
    printf("Contents of the array\n");
    printf("%d\n%d\n%d\n", *ptr, *(ptr+1), *(ptr+2));
}
