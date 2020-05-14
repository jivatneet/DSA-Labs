#include <stdio.h>
#include "que.h"

Queue* newQ(){
	Queue* q;
	return q;

}

int isEmptyQ(Queue * q){
	if(q -> head == q -> tail)
	return 1;
	
	else return 0;
}

Queue * delQ(Queue * q){
	Element * temp=q -> head ;
	q -> head= temp -> next ;
	q -> length -- ;
	return q ;
}

Element front(Queue q){
	Element temp= *(q.head);
	return temp ;
}

Queue* addQ(Queue *q , int k){
	Element * temp = (Element *)malloc (sizeof(Element)) ;
	temp = q -> tail;
	temp -> key= k ;
	q -> tail= temp -> next ;
	q -> length ++ ;
	return q ;
}

int lengthQ(Queue* q){
	return q->length ;
}
	
