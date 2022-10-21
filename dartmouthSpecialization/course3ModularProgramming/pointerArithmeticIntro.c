#include <stdio.h>

int main(){
    int arr[3] = {15, 16, 17};
    printf("array pointer: %p\n", arr);
    printf("Array contents before:\n%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
    
    int * ptr = arr;
    *ptr = 2; // modifies te first element
//    * arr = 2;
    *(ptr + 1) = 3;
    *(ptr + 2) = 5;
    printf("Array contents after:\n%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
    
    return 0;
}
