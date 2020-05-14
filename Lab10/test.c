#include <stdio.h>
#include <stdlib.h>
int *range_arr;
int count=0;

struct node *newNode(int item);

struct node 
{int val; 
struct node *left, *right; 
}; 

struct node *rangeSearch(struct node *root,int k1,int k2);

struct node *newNode(int item) 
{struct node *temp =(struct node *)malloc(sizeof(struct node)); 
temp->val= item; 
temp->left = temp->right = NULL; 
return temp; 
} 

struct node* insert(struct node* node, int key) 
{/* If the tree is empty, return a new node */
if (node == NULL) return newNode(key); 
/* Otherwise, recur down the tree */
if (key < node->val) 
node->left=insert(node->left, key); 
else
node->right=insert(node->right, key); 
/* return the (unchanged) node pointer */
return node; 
} 

int main(){
range_arr=(int *)malloc(sizeof(int)*100);
struct node *root = NULL; 
root = insert(root,50); 
root = insert(root,30); 
root = insert(root,20); 
root = insert(root,40); 
root = insert(root,70); 
root = insert(root,60); 

rangeSearch(root,56,82);
printf("countfinal:%d\n",count);
for(int i=0;i<count;i++){
	printf("%d\n",range_arr[i]);

}}
