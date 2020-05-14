#include "dns.h"

void insert_ip(node *root,char *ip){
	
	node *temp=root->child;
	
	if(!temp){
		root->child=(node *)malloc(sizeof(node));
		strcpy((root->child)->domain,ip);
		(root->child)->sibling=NULL;
		(root->child)->child=NULL;
		return;
	}
	
	else 
		while(temp->sibling){
			temp=temp->sibling;
			}
			
			temp->sibling=(node *)malloc(sizeof(node));
		 	temp=temp->sibling;
			strcpy(temp->domain,ip);
			temp->sibling=NULL;
			temp->child=NULL;
			return;
}


