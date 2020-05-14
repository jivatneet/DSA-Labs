#include "dns.h"
node *root_orig;

int main(){
	int input;

	root_orig=(node *)malloc(sizeof(node));
	root_orig->sibling=NULL;
	root_orig->child=NULL;
	
	FILE *fptr=fopen("input.txt","r");
	if(!fptr){
		printf("Error!");
	}
	
	int N;
	
	while(fscanf(fptr,"%d",&input)!=EOF){
	//printf("%d\n",input);
	if(input==1){
		readData(fptr);
	}
	
	if(input==2){
		lookup(fptr);
	}
	
	if(input==-1){
		printf("progam terminated\n");
		return 0;
	}
	
   }
	
}


