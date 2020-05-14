#include "cycle.h"

int testCyclic(struct linkedlist *ls){
	node *hare;
	node *tort;
	hare=ls->first;
	tort=ls->first;
	
	if(!ls){
		printf("NO LIST\n");
		return -1;
	}
	
	if(!ls->first){
		printf("LIST EMPTY\n");
		return -1;
	}
	
	node * temp=ls->first;
	if(!(temp->next)){
		printf("LIST SINGLETON\n");
		return -1;
	}
	
	//node* dup=hare-> next;
	//hare=dup->next;
	hare=(hare->next)->next;
	tort=tort->next;
	
	while(hare && tort && hare->next){
		if(hare==tort || hare->next==tort){
			printf("CYCLIC\n");
			return 1;
			}
			
			//dup=hare-> next;
			//hare=dup->next;
			hare=(hare->next)->next;
			tort=tort->next;
		}
		
	printf("NOT CYCLIC\n");
	return 0;
}
	
			
		
		

