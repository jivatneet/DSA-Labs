#include "stack.h"

stack createStack(){
	stack s;
	s.top=-1;
	s.currentCapacity=100000;
	s.ele=(stackElement *)malloc(sizeof(stackElement)*(s.currentCapacity));

	return s;
	}

stackElement top(stack s){

	return s.ele[s.top];
	}
	
stack pop(stack s){

	s.top--;
	return s;
	}
	
	
stack push(stack s,stackElement t){
	
	s.ele[++s.top]=t;
	
	return s;
	}
	
	
int isEmpty(stack s){
	if(s.top == -1){
		return 1;
		}
	return 0;
	}
