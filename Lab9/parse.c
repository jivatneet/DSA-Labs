#include "ex1.h"
extern int size_book;

char **parse(char *input){
	FILE *fptr=fopen(input,"r");

	if (fptr == NULL){
		printf("Error! opening file");
		}
		
		char temp[50];
		int size=100000;
		char c;
		char **book=(char **)malloc(sizeof(char *)*size);	//assuming max no os strings as 50,000
		int count=0;
		
	while(fscanf(fptr,"%c",&c)!=EOF){

		int j=0;
		if(isspace(c))
			continue;
		
		else
			do{
				temp[j++]=c;
				fscanf(fptr,"%c",&c);
		
			}while(!isspace(c));

		temp[j]='\0';
	
		int k=0;
		while(temp[k]!='\0'){
		
			if(!isalpha(temp[k])){
				break;
			}
		k++;
		}
	
		if(temp[k]=='\0'){
			book[count]=(char *)malloc(sizeof(char)*50);
			strcpy(book[count],temp);
			//printf("valid:%s\n",temp);
			count++;
		}

		if (count==size){
		
			book=realloc(book,sizeof(char *)*size*2);
			size=size*2;
				} 
				
		}

			size_book=count;
			printf("Total valid strings:%d\n",size_book);
			return book;
			
	}



