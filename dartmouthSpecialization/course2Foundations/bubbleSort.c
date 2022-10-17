#include <stdio.h>

int main(void){
    
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; //usorted list
    
    int n = 10; //length of the list
    
    int i, j, temp;
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - 1; i++){
            if(list[i] > list[i+1]){
                temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;
            }
        }
    }
    
    
    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
    
    return 0;
}
