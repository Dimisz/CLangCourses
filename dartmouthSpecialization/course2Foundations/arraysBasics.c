#include <stdio.h>

int main(void){
    int array[3];
    array[0] = 18;
    array[1] = 137;
    array[2] = 8;
    
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);
    
    int userNums[3];
    int userNum, i;
    for(i=0; i < 3; i++){
        printf("Enter number %d:\n", i+1);
        scanf("%d", &userNum);
        userNums[i] = userNum;
    }
    printf("First user number is %d.\n", userNums[0]);
    printf("Second user number is %d.\n", userNums[1]);
    printf("Third user number is %d.\n", userNums[2]);
    return 0;
}
