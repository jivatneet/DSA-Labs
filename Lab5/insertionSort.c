#include "insertionSort.h"
extern unsigned int maxStackLocation ; 
extern unsigned int minStackLocation ;
extern void *currptr;
unsigned int currStackLocation;

void insertionSort(record *arr,int n){

	if(n<=1)
		return ;
		
	if(n>1)
		insertionSort(arr,n-1);
		
	insertInOrder(arr,n-1);
	
	//printf("The total stack space used is:%u\n",measureSpace(currptr));
	
}
	
	

void insertInOrder(record *r,int j){
	
   record key=r[j];
   int index;
   index=j-1; 
   
   while(index>=0 && r[index].num>key.num){
   		r[index+1]=r[index];
   		index=index-1;
   		}
   		
   	r[index+1]=key;
   	
                                
	currptr=(void *)(&index) ;			//calculating bottom of stack
	currStackLocation= *(unsigned int*)(&currptr);
	//printf("current:%u\n",currStackLocation);
	
	if(currStackLocation < minStackLocation)
		minStackLocation=currStackLocation;
		
	//printf("min:%u\n",minStackLocation);
		
   	}
   
   	
      
