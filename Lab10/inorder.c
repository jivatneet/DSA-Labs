#include "node.h"

void inorder(node *root){

	if(root==NULL)
		return;
		
	if(root!=NULL){
		inorder(root->left);
		printf("%d %d %d %d\n",root->val,height(root->left),height(root->right),root->bal);
		inorder(root->right);
	
	}


}
