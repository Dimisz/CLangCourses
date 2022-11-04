#include <stdio.h>
struct point {
    int x;
    int y;
};


int main(){
    struct point arr[2];
//    arr[0].y = 4; // WORKING
//    arr[0]->y = 4; // not working
//    (arr+1)->y = 4; // WORKING
//    (arr+1).y = 4; // not working
    
    printf("%d\n", arr[1].y);
}
