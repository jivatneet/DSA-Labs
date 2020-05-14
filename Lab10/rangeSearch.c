#include "node.h"
extern int *range_arr;
extern int count;

node *rangeSearch(node *root,int k1,int k2){
		
		if(!root)
			return root;
				
		
		if(root->val>k2){
			rangeSearch(root->left,k1,k2);
		}
		
		
		if(root->val<k1){
			rangeSearch(root->right,k1,k2);
		}
		
		if(root->val<=k2 && root->val>=k1){
			
			if(root->val==k2){
				//printf("val:%d\n",root->val);
				range_arr[count]=root->val;
				//printf("val:%d\n",range_arr[count]);
				count++;
				//printf("count:%d\n",count);
				rangeSearch(root->left,k1,root->val);
			}
			
			else if(root->val==k1){
				range_arr[count]=root->val;
				//printf("val:%d\n",root->val);
				//printf("val:%d\n",range_arr[count]);
				count++;
				//printf("count:%d\n",count);
				rangeSearch(root->right,k1,k2);
			}
			
			else{
			rangeSearch(root->left,k1,root->val);
			range_arr[count]=root->val;
			printf("val:%d\n",root->val);
			printf("val:%d\n",range_arr[count]);
			count++;
			printf("count:%d\n",count);
			rangeSearch(root->right,root->val,k2);
			}
		}
	}
