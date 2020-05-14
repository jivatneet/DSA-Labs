#include "dns.h"
extern int index_global;

node *look_for(node *root,char *arr,int *child){
	node *temp=root->child;
	if(!temp){
		printf("No node exists\n");
	
	}

	int index=0;
	if(!(strcmp(temp->domain,arr))){
		child[index_global]=index;
		index_global++;
		return temp;
	
	}
	
	else
		while(temp->sibling && (strcmp(temp->sibling->domain,arr))){
		 	temp=temp->sibling;
		 	//printf("index:%d\n",index);
		 	index++;
		  }
		 
		 //printf("index global:%d\n",index_global);
		 
		 if(temp->sibling==NULL){
		 	for(int i=0;i<index_global;i++){
		 		printf("%d ",child[i]);
		 		}
		 printf("\n");
		 return temp->sibling;
		 }
		 
		 else if(temp->sibling && strcmp(temp->sibling->domain,arr)==0){
		 	index++;
		  	child[index_global]=index;
		  	index_global++;
		  	return temp->sibling;
		  }
		  
	
		 
}
