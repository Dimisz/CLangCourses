#include <stdio.h>

int main(void){
    char a[4];
    char b[6];
    char c[9];
    
    char * words[3] = {a, b, c};
    printf("Please enter a word with at most 3 letters: ");
    scanf("%s", a); //a already a pointer
    printf("Please enter a word with at most 5 letters: ");
    scanf("%s", b); //b already a pointer
    printf("Please enter a word with at most 8 letters: ");
    scanf("%s", c); //c already a pointer

    
    printf("You entered: %s %s %s\n", a, b, c);
    printf("You entered: %s, %s, and %s\n", words[0], words[1], words[2]);
    
    
    
    return 0;
}
