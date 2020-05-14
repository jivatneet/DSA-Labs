#include "node.h"

node *rotate(node *x,node *y,node *z){

	if(!x || !y || !z){
		printf("Null\n");
		return NULL;
		}
		
	node *a,*b,*c;
	node *t0,*t1,*t2,*t3;
	
	if(y->left==x && z->left==y){		//Case 1 LL
		printf("Case 1\n");
		a=x;
		b=y;
		c=z;
		t0=x->left;
		t1=x->right;
		t2=y->right;
		t3=z->right;	
		b->left=a;
		b->right=c;
		a->left=t0;a->right=t1;
		c->left=t2;c->right=t3;
		return b;
		}
		
	
	if(y->right==x && z->right==y){		//Case 4 RR
		printf("Case 4\n");
		a=x;
		b=y;
		c=z;
		t0=z->left;
		t1=y->left;
		t2=x->left;
		t3=x->right;	
		b->left=c;
		b->right=a;
		a->left=t2;a->right=t3;
		c->left=t0;c->right=t1;
		return b;
		}	
	
		
	if(y->left==x && z->right==y){		//Case 2 RL
		
		printf("Case 2\n");
		a=x;
		b=y;
		c=z;
		t0=y->left;
		t1=x->left;
		t2=x->right;
		t3=z->right;	
		a->left=b;
		a->right=c;
		c->left=t2;c->right=t3;
		b->left=t0;b->right=t1;
		return a;
		}
		
		
	if(y->right==x && z->left==y){		//Case 3 RL
		printf("Case 3\n");
		a=x;
		b=y;
		c=z;
		t0=z->left;
		t1=x->left;
		t2=x->right;
		t3=y->right;	
		a->left=c;
		a->right=b;
		c->left=t0;c->right=t1;
		b->left=t2;b->right=t3;
		return a;
		}
	}
	
	








