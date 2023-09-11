#ifndef _stackLinkedList_h
#define _stackLinkedList_h
#include <stdlib.h>
#include <stdio.h>

typedef enum boolean { FALSE, TRUE } boolean;
// only need to change how the Stack is defined
// change from an ary to a linked list
// need to add a Node definition (will be of type char*)
//
typedef struct NodeLL
{
    char* data;           /*string data stored in the stack*/
    struct Stack* Next;
}NodeLL;
typedef struct Stack
{
    struct NodeLL* Head;
}Stack;

Stack* createStack();
void freeStack(Stack* ps);
void freeStackElements(Stack* ps);

char* pop(Stack* ps);
void push(Stack* ps, char* str);
char* top(Stack* ps);

boolean isEmpty(Stack* ps);
/*boolean isFull(Stack* ps);*/

#endif