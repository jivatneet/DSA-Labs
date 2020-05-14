#include "ex1.h"
#include "record.h"
extern int min[2];
extern int size_book;

int main(){
	
	int val;
	char **book=parse("aliceinwonderland.txt");
	
	for(int i=0;i<size_book;i++){
		printf("%s\n",book[i]);
	}
	
	min[1]=3;
	min[0]=5;
	hasht *h;
	/*h=createHash();
	printf("elemcount:%d \n",h->elementCount);
	size_book=5;
	char *myst[]={"hi","gj","fk","hi","gj"};
	insert(h,myst,0);
	insert(h,myst,1);
	insert(h,myst,2);
	insert(h,myst,3);
	rec *look=lookup(h,"gj",myst);
	printf("%d %d\n",look->index,look->count);
	
	printf("querycost:%d\n",lookupAll(h,0.6,myst));*/
	}
