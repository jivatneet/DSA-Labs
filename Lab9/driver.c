#include "ex1.h"
extern int min[2];
#include "record.h"

int main(){
	
	int coll_val[18],j=0;
	char **book=parse("aliceinwonderland.txt");
	printf("sizebook:%d\n",size_book);
	/*for(int i=0;i<size_book;i++){
		printf("%s\n",book[i]);
	}*/
	printf("sizebook:%d\n",size_book);
	
	/*int tabsize=500;
	int prime[6]={632,659,842,50028,50031,50031};
	printf("5000:\n");
	for(int i=0;i<6;i++){
		coll_val[j]=collisioncount(book,prime[i],tabsize);
		printf("%d Collission count:%d\n",prime[i],coll_val[j]);
		j++;
		}
	
	printf("\n");
	printf("250:\n");
	tabsize=250;	
	int prime_2[6]={51893,69761,82261,50005997,50012323,50013637};
	for(int i=0;i<6;i++){
		coll_val[j]=collisioncount(book,prime_2[i],tabsize);
		printf("%d Collission count:%d\n",prime_2[i],coll_val[j]);
		j++;
		}
		
	printf("\n");
	printf("500000:\n");
	tabsize=500000;	
	int prime_3[6]={501841,6021081,801557,500002991,500015687,500015689};
	for(int i=0;i<6;i++){
		coll_val[j]=collisioncount(book,prime_2[i],tabsize);
		printf("%d Collission count:%d\n",prime_3[i],coll_val[j]);
		j++;
		}*/
		
	min[1]=5000;
	min[0]=69761;
	
	hasht *h;
	h=createHash();
	printf("elemcount:%d \n",h->elementCount);
	int inscost=insertAll(h,book);
	printf("Insertion Cost:%d\n",inscost);
	printf("elemcount:%d \n",h->elementCount);
	lookupAll(h,0.5,book);
	}
		
		
	
