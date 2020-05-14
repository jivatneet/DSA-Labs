#include "heap.h"

struct linkedlist *createCycle(struct linkedlist *ls){
		srand(time(0));
		int coin=rand()%2 ;
		printf("coin:%d\n",coin);
		
		if(coin==0)  		//linear linked list
		return ls;
		
		if(coin==1){		//cyclic linked list
			int r=(rand()%10)+1 ;
			node *temp=ls->first;
			node *last;
			
			if(temp==NULL)
				return ls;
				
			while(temp->next){
				temp=temp->next;
				}
				
			last=temp;
			
			temp=ls->first;
			while(temp){
				if(temp->val==r){
					last->next=temp;
					printf("Made Cyclic\n");
					return ls;
					}
					
				temp=temp->next;
				}
					
				   printf("Node with value %d not found\n",r);
				   return ls;
				}
				
			}
	
