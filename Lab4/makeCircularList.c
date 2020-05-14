#include "cycle.h"
  
struct linkedlist *makeCircularList(struct linkedlist *ls){

	int n=testCyclic(ls);
	node *temp;

	if(n==0){
		temp=ls->first;
		while(temp->next){
			temp=temp->next;
			}
			
		temp->next=ls->first;
		
		printf("linear made Circular\n");
		return ls;
		}
		
	if(n==1){
	
		//figure out how to find the node where cycle begins and store in temp
		node *slow=ls->first;
		node *fast=ls->first;
		slow=slow->next;
		node *temps=fast->next;
		fast=temps->next;
		
		while(fast && fast->next){
			if(slow==fast)
				break;
				
			slow=slow->next;
			temps=fast->next;
			fast=temps->next;
			}
		
		if(slow!=fast)
			return NULL;
			
		slow=ls->first;
		while(slow!=fast){
			slow=slow->next;
			fast=fast->next;
			}
			
		temp=slow;
		
		node *dup=ls->first;
		node *del;
		while(dup!=temp){		//temp contains the first node of the circular list
			del=dup;
			myfree(del);
			printf("space currently in heap is:%d\n",space);
			dup=dup->next;
			}
			
		ls->first=dup;
		printf("Cyclic made Circular\n");
		return ls;
		
		}
		
	else 
		printf("list singleton or empty,not made circular\n");
		return ls;
		
	}		
		
	
