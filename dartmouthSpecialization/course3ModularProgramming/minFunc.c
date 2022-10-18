#include <stdio.h>

int min(int, int);

int main(void){
    int arrayLength;
    scanf("%d", &arrayLength);
    int arr[arrayLength];
    
    int i, num;
    for(i = 0; i < arrayLength; i++){
        scanf("%d", &num);
        arr[i] = num;
    }
    
    int minNumber = arr[0];
    for(i = 0; i < arrayLength; i++){
        minNumber = min(minNumber, arr[i]);
    }
    
    printf("%d\n", minNumber);
    
    return 0;
}


int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
