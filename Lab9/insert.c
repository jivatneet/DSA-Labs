#include "record.h"

hasht* insert(hasht *h,char *A[],int i){
	
	int pos=hashfn(A[i],min[0],min[1]);
	printf("%s\n",A[i]);
	
	rec *temp=&((h->head)[pos]);
	
	/*printf("%d\n",(h->head)[pos].index);
	printf("%d\n",(h->head)[pos].count);*/
	printf("pos:%d\n",pos);
	if(temp->next==NULL){
	printf("null\n");
		temp->next=(rec *)malloc(sizeof(rec));
		temp=temp->next;
		temp->index=i;
		temp->count=1;
		h->elementCount++;
		printf("count:%d\n",temp->count);
		temp->next=NULL;
		return h;
		}
		
	temp=temp->next;
	rec *prev;
	while(temp){
		if(strcmp(A[temp->index],A[i])){
				printf("%s:no match\n",A[i]);
				prev=temp;
				temp=temp->next;
				h->insertionCost++;
			}
			
		else if((strcmp(A[temp->index],A[i]))==0){
			printf("%s:match\n",A[i]);
			temp->count++;
			printf("count:%d\n",temp->count);
			h->insertionCost++;
			return h;
			}
			
		}
		
		prev->next=(rec *)malloc(sizeof(rec));
		prev=prev->next;
		prev->index=i;
		prev->count=1;
		prev->next=NULL;
		h->elementCount++;
		return h;
	}
	
