#include <stdio.h>

struct point{
    int x;
    int y;
};

void printPoint(struct point);
void printTriangle(struct point[]);
void readPoint(struct point *);

int main(void){
    int numPoints = 3;
    
    
    struct point triangle[numPoints];
    for(int i = 0; i < numPoints; i++){
        readPoint(&triangle[i]);
    }
    
    printTriangle(triangle);
    
    return 0;
}

void readPoint(struct point * ptr){
    printf("Enter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);
    printf("y-coordinate: ");
    scanf("%d", &(*ptr).y);
}

void printPoint(struct point pt){
    printf("x: %d\ty: %d\n", pt.x, pt.y);
}

void printTriangle(struct point triangle[]){
    for(int i = 0; i < 3; i++){
        printPoint(triangle[i]);
    }
}
