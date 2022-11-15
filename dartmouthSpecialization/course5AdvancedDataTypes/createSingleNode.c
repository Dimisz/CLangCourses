#include <stdio.h>
#include <stdlib.h>

struct digit 
{
    int num;
    struct digit * next;
};

struct digit * append(struct digit * end, struct digit * newDigitPtr);
struct digit * createDigit(int);

int main(void)
{
    // struct digit * numberPtr;
    // int digitToStore = 5;

    // numberPtr = createDigit(digitToStore);

    // printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberPtr->num, numberPtr->next, numberPtr);
    // free(numberPtr);
    struct digit * start, * newDigitPtr, * end, * tmp;

    int first = 5;
    int second = 3;
    int third = 7;

    start = createDigit(first);
    end = start;

    newDigitPtr = createDigit(second);
    end = append(end, newDigitPtr);

    newDigitPtr = createDigit(third);
    end = append(end, newDigitPtr);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);
    
    return 0;

}

struct digit * append(struct digit * end, struct digit * newDigitPtr)
{
    end->next = newDigitPtr;
    end = newDigitPtr;
    return end;
}

struct digit * createDigit(int dig)
{
    struct digit * ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}