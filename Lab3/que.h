#include <stdio.h>
#include <stdlib.h>
#ifndef _QUEUE
#define _QUEUE


typedef struct{
	int key;
	struct Element * next;
}Element ;

typedef struct{
	int length;
	Element * head;
        Element * tail;
}Queue ;

Queue* newQ();// returns an empty Queue
int isEmptyQ(Queue *q) ;// tests whether q is empty
Queue * delQ(Queue * q); // deletes the element from the front of the Queue;returns the modified Queue
Element front(Queue q) ;// returns the element from the front of the Queue;
Queue* addQ(Queue*  q , int k) ;// adds e to the rear of the Queue; returns the modified Queue
int lengthQ(Queue* q) ; // returns the length of the Queue

#endif
