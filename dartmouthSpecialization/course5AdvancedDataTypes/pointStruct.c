#include <stdio.h>

struct point {
    int x;
    int y;
};

void printPoint(struct point *);
void readPoint(struct point *);

int main(void){
    struct point pt;
    readPoint(&pt);
    printPoint(&pt);
    
    
    return 0;
}

void printPoint(struct point * pt){
    printf("The point coordinates are:\nx: %d\ty: %d\n", (*pt).x, (*pt).y);
}

void readPoint(struct point * pt){
    printf("Enter the x and y coordiates of the point:\n");
//    scanf("%d", &(*pt).x);
    /* WRONG SYNTAX
    scanf("%d", &pt.x);
    scanf("%d", &pt.y);
     */
    scanf("%d", &pt->x);
    // scanf("%d", &(*pt).y);
    scanf("%d", &pt->y);
}
