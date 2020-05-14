#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
 
 void insertFirst(struct linkedList* head,int ele){
 
 	struct node* link= (struct node*)(sizeof(struct node)) ;
 	link ->element= ele ;
 	link ->next= head->first ;
 	head ->first= link ;
 	head ->count ++ ;
 	printf("a");
 }
 
 struct node* deleteFirst(struct linkedList * head){
 	struct node* temp= (struct node*)(sizeof(struct node)) ;
 	temp= head ->first ;
 	head ->first= temp ->next ;
 	head ->count -- ;
 	return head->first ;
 }
 */
 //display the list
void printList(struct linkedList * head){
struct node *ptr = head->first;
printf("\n[ ");
//start from the beginning
while(ptr != NULL){
printf("%d, ", ptr->element);
ptr = ptr->next;
}
printf(" ]");
}


 	
