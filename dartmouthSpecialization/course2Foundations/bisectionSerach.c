#include <stdio.h>

int main(void){
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; //sorted list
    
    int n = 10; // length of the list
    int item;
    printf("Which number are you looking for?");
    scanf("%d", &item);
    
    
    int bottomIndex, topIndex, middle, found;
    bottomIndex = 0;
    topIndex = n - 1;
    found = 0;
    
    while(!found && (bottomIndex <= topIndex)){
        middle = (bottomIndex + topIndex) / 2;
        if(item == list[middle]){
            found = 1;
        }
        else if(item < list[middle]){
            topIndex = middle - 1; // toss the top half
        }
        else{
            bottomIndex = middle + 1; //toss the bottom half
        }
    }
    
    if(!found){
        printf("Number %d was not found in the array.\n", item);
    }
    else{
        printf("Number %d was found at index %d.\n", item, middle);
    }
    
    
    return 0;
}
