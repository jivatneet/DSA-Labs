#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void preorder(node *root);
int *range_arr;
int count=0;

void preorder(node *root) 
{ 
    if(root != NULL) 
    { 
        printf("%d ", root->val); 
        preorder(root->left); 
        preorder(root->right); 
    } 
} 

int main(){
	node *root=NULL;
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,5);
	root=insert(root,40);
	root=insert(root,8);
	root=insert(root,6);
	
	inorder(root);
	preorder(root);
	//node *res=delete(root,90);
	//printf("%d\n",res->val);
	//inorder(root);
	
	/*range_arr=(int *)malloc(sizeof(int)*100);
	rangeSearch(root,12,42);
	printf("countfinal:%d\n",count);
	for(int i=0;i<count;i++){
	printf("%d\n",range_arr[i]);
	}*/
	
	
}
