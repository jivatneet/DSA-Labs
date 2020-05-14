#include <stdlib.h>
#include "heap.h"


struct linkedlist *createList(int n){
	FILE * fptr = fopen("abc.txt","w");

	
	srand(1);
	struct linkedlist * ls=(struct linkedlist*)myalloc(sizeof( struct linkedlist));
	ls->count=0;
	node *temp=(node*)myalloc(sizeof(node));
	ls->first=temp;
	temp->val=(rand()%10)+1 ;
	printf("Values are: %d,",temp->val);
	ls->count=1;
	//temp->val=rand();
	
	for(int i=2; i<=n;i++){
		temp->next=(node*)myalloc(sizeof(node));
		temp=temp->next;
		temp->val=(rand()%10)+1;
		printf("%d,",temp->val);
		ls->count++;

		}
		
		temp->next=NULL;
		fprintf(fptr,"Space allocated is:%d\n",space);
		fclose(fptr);
	
 return ls;
 }
		
		
		
		
		
		
