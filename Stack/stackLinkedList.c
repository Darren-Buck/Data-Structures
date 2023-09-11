#include "stackLinkedList.h"


Stack* createStack() {

    Stack* ps = (Stack*)malloc(sizeof(Stack));
    if (ps == NULL) {
        printf("Error did not find memory.\n");
        return NULL;
    }
    NodeLL* Head = NULL;
    return ps;
}

void freeStack(Stack* ps) {
    free(ps);
}

void freeStackElements(Stack* ps) {
    while (isEmpty(ps) == FALSE) {
        free(pop(ps));
    }
}

char* pop(Stack* ps) {  
    char* temp = ps->Head->data;
    NodeLL* tmp = ps->Head;
    ps->Head = ps->Head->Next;
    free(tmp);
    return temp;
}

void push(Stack* ps, char* str) {
    NodeLL* New = (NodeLL*)malloc(sizeof(NodeLL));
    if (New == NULL) {
        printf("Error did not find memory.\n");
    }
   else {
	 			New->data = str;
    		New->Next = ps->Head;
    		ps->Head = New;
    }
    
}

char* top(Stack* ps) {
    if (isEmpty(ps)) { 
			printf("Tried to peak at the top of the stack, but it was empty.\n");
			return NULL;
		 }
    return (ps->Head->data);
}

boolean isEmpty(Stack* ps) {
    if (ps->Head == NULL) {
        return TRUE;
    }
    return FALSE;
}
