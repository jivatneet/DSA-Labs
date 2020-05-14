#include "node.h"
/*void updatebalance(node* root){
    if(root==NULL) {root->bal = 0; return;}
    root->bal =  height(root->right) - height(root->left);
}*/

int max(int a,int b){
if(a>b)
	return a;
else return b;
}

int height(node *root){
	if(root==NULL)
		return -1;
	else return 1+ max(height(root->left),height(root->left));
	
}

node *insert(node *root,int key){

	node *newNode=(node *)malloc(sizeof(node));
	newNode->val=key; 
	newNode->bal=0;
	newNode->left=NULL;
	newNode->right=NULL;
	
	if(root==NULL){
		printf("New node:%d\n",key);
		return newNode;
		}
		
	if(key < root->val){
		root->left=insert(root->left,key);
		
		//updatebalance(root);
		}
	
	else if(key > root->val){
		root->right=insert(root->right,key);
		
		//updatebalance(root);
		}
		
		root->bal=height(root->left)-height(root->right);
		if(root->bal>1 && key <root->left->val)
			return root=rotate(root->left->left,root->left,root);
			
		if(root->bal<-1 && key >root->right->val)
			return root=rotate(root->right->right,root->right,root);
			
		if(root->bal>1 && key > root->left->val)
			return root=rotate(root->left->left,root->left,root);
			
		if(root->bal<-1 && key <root->right->val)
			return root=rotate(root->right->right,root->right,root);
			
		//printf("inserted node:%d\n",key);
		return root;			// Returns the pointer where the 
    // new node is inserted 
	
	}
		
		
