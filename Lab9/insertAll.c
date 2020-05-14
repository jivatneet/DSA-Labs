#include "record.h"

int insertAll(hasht *h,char **book){
	
	printf("%d\n",size_book);
	for(int i=0;i<size_book;i++){
		int pos=hashfn(book[i],min[0],min[1]);
		printf("pos:%d\n",pos);
	
		rec *temp=&((h->head)[pos]);
		if(temp->next==NULL){
		temp->next=(rec *)malloc(sizeof(rec));
		temp=temp->next;
		temp->index=i;
		temp->count=1;
		h->elementCount++;
		temp->next=NULL;
	
		if(i==size_book)
			return h->elementCount;
			
		else continue;
		}
	
		temp=temp->next;
		rec *prev;
		while(temp){
		if(strcmp(book[temp->index],book[i])){
				printf("%s:no match\n",book[i]);
				prev=temp;
				temp=temp->next;
				h->insertionCost++;
			}
			
		else if((strcmp(book[temp->index],book[i]))==0){
			printf("%s : match\n",book[i]);
			temp->count++;
			printf("count:%d\n",temp->count);
			break;
			}
			
		}
		
		continue;
		prev->next=(rec *)malloc(sizeof(rec));
		prev=prev->next;
		prev->index=i;
		prev->count=1;
		prev->next=NULL;
		h->elementCount++;
	
	}
	return h->insertionCost;
}
