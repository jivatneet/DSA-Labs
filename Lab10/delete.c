#include "node.h"
node *minimum(node *x){

	while(x->left!=NULL){
		x=x->left;
	
	}
	return x;
}


node *deleteNode(node *root,int key){
	if(root==NULL)
		return root;
		
	if(key < root->val)		//If the key to be deleted is smaller than the root's key, then it lies in left subtree
		
		root->left=delete(root->left,key);
	
	else if(key > root->val)
		root->right=delete(root->right,key);
		
	else{				//key same as root's key
		if(root->left==NULL){
			node *temp=root->right;
			free(root);
			return temp;
		
		}
	
		else if(root->right==NULL){
			node *temp=root->left;
			free(root);
			return temp;
		
		}
	
		//node with two children, get inorder successor
		
		node *temp=minimum(root->right);
		root->val=temp->val;
		
		//delete the inorder successor
		root->right=delete(root->right,temp->val);
	
	}
	
	return root;	
		
}
