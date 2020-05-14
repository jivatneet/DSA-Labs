#include "dns.h"

node *insert(node *root,char *arr){
	node *temp=root->child;
	
	if(!temp){
		root->child=(node *)malloc(sizeof(node));
		strcpy((root->child)->domain,arr);
		printf("inserted as new child:%s\n",arr);
		(root->child)->sibling=NULL;
		(root->child)->child=NULL;
	
		return root->child;
	}


	if(!(strcmp(temp->domain,arr))){
		printf("already there:%s\n",arr);
		return temp;
	}
	
	else 
		 while(temp->sibling && (strcmp(temp->sibling->domain,arr))){
		 	temp=temp->sibling;
		  }
		 
		 if(temp->sibling==NULL){
		 	temp->sibling=(node *)malloc(sizeof(node));
		 	temp=temp->sibling;
			strcpy(temp->domain,arr);
			temp->sibling=NULL;
			temp->child=NULL;
			printf("inserted as sibling:%s\n",arr);
			return temp;
		 }
		 
		 if(strcmp(temp->sibling->domain,arr)==0){
		 		printf("matching in sibling:%s\n",arr);
		 		return temp->sibling;
		 }
		 
}
