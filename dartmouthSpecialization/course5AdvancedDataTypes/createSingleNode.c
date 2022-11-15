#include <stdio.h>
#include <stdlib.h>

struct digit 
{
    int num;
    struct digit * next;
};

struct digit * createDigit(int);

int main(void)
{
    struct digit * numberPtr;
    int digitToStore = 5;

    numberPtr = createDigit(digitToStore);

    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberPtr->num, numberPtr->next, numberPtr);
    free(numberPtr);

    return 0;

}

struct digit * createDigit(int dig)
{
    struct digit * ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}