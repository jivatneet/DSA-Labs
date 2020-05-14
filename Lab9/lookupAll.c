#include "record.h"
extern int size_book;

int lookupAll(hasht *h,float m,char **book){

	
	int size=(int)(m*size_book);
	rec **temp=(rec **)malloc(sizeof(rec *)*size);
	//printf("%d %d\n",size_book,size);
	
	for(int i=0;i<size;i++){
		printf("%s\n",book[i]);
		temp[i]=lookup(h,book[i],book);
		//printf("count:%d\n",temp[i]->count);	

	
	}

	return h->queryingCost;
}
