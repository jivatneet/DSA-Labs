#include "record.h"

rec *lookup(hasht *h,char *inp,char **book){
	int pos=hashfn(inp,min[0],min[1]);
	
	//printf("%s\n",inp);
	//printf("pos:%d\n",pos);
	
	rec *temp=&((h->head)[pos]);
	
	if(temp->next==NULL){
		printf("record not found\n");
		
	}
	
	temp=temp->next;
	while(temp){
		if(strcmp(book[temp->index],inp)){
				temp=temp->next;
				h->queryingCost++;
			}
			
		else
			return temp;
		}
	}
