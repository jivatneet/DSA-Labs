#include "node.h"

tree *delete(tree *t,int key){

	node *z=search(t->root,key);
	node *y;
	node *x;
	
	if (z->left==NULL && z->right==NULL){
			
		if(z==(z->parent->left))
			z->parent->left=NULL;
			
		else z->parent->right=NULL;
		}
		
	else if(z->left==NULL || z->right==NULL)
		y=z;
		
	else y=successor(z);
	
	if(y->left!=NULL)
		x=y->left;
		
	else x=y->right;
	
	if(x!=NULL)
		x->parent=y->parent;
		
	if(y->parent==NULL)
		t->root=x;
		
	else if(y== (y->parent->left))
		y->parent->left=x;
	else y->parent->right=x;
	
	if(!(y==z))
		z->val=y->val;
		
	return y;
	
	
	}	
	
	

