#include <stdio.h>

int main(void){
    short a[3] = {234, 655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    
    short * arrays[3] = {a, b, c};
    
    * arrays[0] = 5;
    // second way
    //arrays[0][0] = 5;
    
    * (arrays[0] + 1) = 6;
    * (arrays[0] + 2) = 7;
    
    
    return 0;
}
