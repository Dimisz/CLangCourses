#include <stdio.h>

int main(void){
    char userWord[51];
    printf("Enter a word: ");
    scanf("%s", &userWord);
    
    int wordLength = 0;
    while(userWord[wordLength] != '\0'){
        wordLength++;
    }
    printf("word length: %d\n", wordLength);
    
    // sorting the letters alphabetically using bubble sort
    int i, j;
    char temp;
    for(i = 0; i < wordLength - 1; i++){
        for(j = 0; j < wordLength - 1; j++){
            if(userWord[j] > userWord[j+1]){
                temp = userWord[j+1];
                userWord[j+1] = userWord[j];
                userWord[j] = temp;
            }
        }
    }
    
    for(i = 0; i < wordLength; i++){
        printf("%c ", userWord[i]);
    }
    printf("\n");
    
    int count = 0;
    for(i = 0; i < wordLength; i++){
        if(userWord[i] == userWord[i+1]){
            count++;
            while(userWord[i] == userWord[i+1]){
                i++;
            }
        }
    }
    printf("%d\n", count);
    
    
    return 0;
}
