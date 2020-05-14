#include "node.h"
extern int count;

node *inorder_search(node *t,int k){
	node *x=t;
	
	count=0;
		
	if(x!=NULL){
		inorder_search(x->left,k);
		count++;
		if(count==k)
			return x;
			
		inorder_search(x->right,k);
		}
}
