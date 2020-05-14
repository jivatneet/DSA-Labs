#include "dns.h"
extern node *root_orig;

int read_dots(char *in){
	int i=0,count=0;
	while(in[i]!='\0'){
	//printf("%c ",in[i]);
		if(in[i]=='.'){
			count++;
			}
			
		i++;
		}
	//printf("no of dots:%d\n",count);
	return count;
	}

void readData(FILE *f){

	/*node *root_orig=(node *)malloc(sizeof(node));
	root_orig->sibling=NULL;
	root_orig->child=NULL;*/
	node *root=root_orig;
	
	int N;
	fscanf(f,"%d\n",&N);
	printf("N:%d\n",N);
	
		char *domain[N];
		char *ip[N];
		int count[N];
		
		for(int n=0;n<N;n++){
			domain[n]=(char *)malloc(sizeof(char)*100);
			ip[n]=(char *)malloc(sizeof(char)*100);
			
		}
		
		for(int i=0;i<N;i++){ //read strings
			fscanf(f,"%s %s\n",domain[i],ip[i]);
			//printf("hey ya:  %s\n",domain[i]);
			//printf("%s\n",ip[i]);
			count[i]=read_dots(domain[i]);
			int var=count[i];
			//printf("%d\n",var);
			
			char *arr[var+1];     //copy dot separated strings
			for(int l=0;l<=var;l++){
				arr[l]=(char *)malloc(sizeof(char)*100);
			}
			
			
			int j,ctr=0;
			
			for(int k=0; k<=var; k++){
				j = 0;		
				
				while(domain[i][j+ctr]!='.' && domain[i][j+ctr]!='\0'){
				
				//printf("%c\n",domain[i][j]);
				arr[k][j]=domain[i][j+ctr];
				//printf("%c\n",arr[i][j]);
				//printf("j:%d\n",j);
				j++;
				//printf("%s\n",domain[k]);
				}
				ctr+=(j+1);
				arr[k][j]='\0';
			}
			
				
			for(int k=var;k>=0;k--){
				printf("%s\n",arr[k]);
				root=insert(root,arr[k]);
				}
	
			insert_ip(root,ip[i]);
			root=root_orig;
	}

	for(int i=0;i<N;i++){
	free(domain[i]);
	free(ip[i]);
	}
}
