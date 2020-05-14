#include <stdio.h>
#include <stdlib.h>
#ifndef _STACK
#define _STACK

typedef struct stackElement{
	int l,h;	
	}stackElement;

typedef struct stack{
	int top;
	stackElement *ele;
	int currentCapacity ;
	}stack;
	
stack createStack();
stackElement top(stack s);
stack pop(stack s);
stack push(stack s,stackElement t);
int isEmpty(stack s);

#endif
	
	
