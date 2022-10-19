#include <stdio.h>

int main(void){
    int numVars;
    char typeVars;
    
    scanf("%c %d", &typeVars, &numVars);
    //printf("%c %d\n", typeVars, numVars);
    
    int total = 0;
    int mb, kb, b;
    
    if(typeVars == 'i'){
        total = numVars * (sizeof(int));
    }
    else if(typeVars == 'c'){
        total = numVars * (sizeof(char));
    }
    else if(typeVars == 'd'){
        total = numVars * sizeof(double);
    }
    
    mb = total / 1000000;
    kb = (total - (mb * 1000000))/ 1000;
    b = total - (mb * 1000000) - (kb * 1000);
//    printf("total: %d\n", total);
//    printf("mb: %d\n", mb);
//    printf("kb: %d\n", kb);
//    printf("b: %d\n", b);
    if(mb > 0){
        printf("%d MB and %d KB and %d B\n", mb, kb, b);
    }
    else if(kb > 0){
        printf("%d KB and %d B\n", kb, b);
    }
    else{
        printf("%d B\n", b);
    }
    
    
    return 0;
}
