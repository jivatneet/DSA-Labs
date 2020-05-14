#include <stdio.h>
#include <stdlib.h>

struct node{
	int bal;		//-1 if the left subtree is taller
				//1 if the right subtree is taller,
				//0 if the subtrees are of the same height
	int val;
	struct node *left;
	struct node *right;
			
};
	
typedef struct node node;

/*struct tree{
	node *root;
	};
	
typedef struct tree tree;*/

node *insert(node *root,int key);
void inorder(node *root);
node *search(node *x,int key);
node *deleteNode(node *root,int key);
node *minimum(node *x);
node *rotate(node *x,node *y,node *z);
//void updatebalance(node* root);
int max(int a,int b);
int height(node *root);
//node *successor(node *x);
node *search(node *x,int key);
node *inorder_search(node *t,int k);
node *rangeSearch(node *root,int k1,int k2);

int count;
int *range_arr;

/*node *successor(node *x){
	if (x->right !=NULL){
		return minimum(x->right);
	}
	
	node *y=x->parent;
	while(y!=NULL && x==y->right){
	
		x=y;
		y=y->parent;
	}
	return y;
}*/


	
	
