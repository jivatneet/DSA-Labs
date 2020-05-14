#include "node.h"

node *search(node *x,int key){
	if(x==NULL || key==x->val)
		return x;
		
	node *temp=x;
	if (key<temp->val){
	return search(temp->left,key);
	}
	
	else return search(temp->right,key);

}
