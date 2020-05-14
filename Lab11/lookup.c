#include "dns.h"
extern int index_global;
extern node *root_orig;

void lookup(FILE *f){
	char name[100];
	int child_number[20];
	node *root_dup=root_orig;
	
	fscanf(f," %s\n",name);
	//printf("%s\n",name);
	int count=read_dots(name);
	//printf("%d\n",count);
	
	char *arr1[count+1];     //copy dot separated strings
			
	for(int l=0;l<=count;l++){
		arr1[l]=(char *)malloc(sizeof(char)*100);
		}
		
	int j,ctr=0;
	for(int k=0; k<=count; k++){
				
		j = 0;		
				
		while(name[j+ctr]!='.' && name[j+ctr]!='\0'){
				
			arr1[k][j]=name[j+ctr];
			j++;
			}
		
			ctr+=(j+1);
			arr1[k][j]='\0';
			}
		
		index_global=0;	
	for(int k=count;k>=0;k--){
		//printf("%s\n",arr1[k]);
		root_dup=look_for(root_dup,arr1[k],child_number);
		if (!root_dup){ return;}
		}
		
		printf("%s\n",root_dup->child->domain);
		
	}
			
		

