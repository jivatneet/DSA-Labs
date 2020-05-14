#include "ex1.h"
extern int size_book;

int collisioncount(char **input,int baseNumber,int tableSize){
	
	int i=0,count=0,val;
	int size=100000;
	int *arr=(int *)malloc(sizeof(int)*size);
	//while(input[i]!='\0'){
	//printf("sizbook:%d\n",size_book);
	for(int i=0; i<size_book;i++){
	
		//printf("%s\n",input[i]);
		val=hashfn(input[i],baseNumber,tableSize);
		//printf("val:%d\n",val);
		arr[i]=val;
		
		for(int j=0;j<i;j++){
			//printf("arr[j]=%d,VAL=%d\n",arr[j],val);
			if(arr[j]==val){
				count++;
				break;
				}
			}
		
	if(i==size){
		arr=(int *)realloc(arr,i*2);
		size=i*2;
		}
		
	//printf("count:%d\n",count);
		
	}
	return count;
		
		}
