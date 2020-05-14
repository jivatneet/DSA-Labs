#include "stack.h"

void push(struct linkedList* head,int ele){
	struct node *link = (struct node*) malloc (sizeof(struct node));
	link -> element = ele ;
	link -> next = head -> first ;
	head -> first = link ;
	head -> count ++ ;
}

struct node * pop(struct linkedList * head){
	struct node *temp = head -> first ;
	head -> first = temp -> next ;
	head -> count --;
	printf("\n%d", temp -> element) ;
	return temp ;
}

	
