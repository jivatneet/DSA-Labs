#include "readRecords.h"
extern int count;


void readRecords(char* input){
	FILE *fptr=fopen(input,"r");

	if (fptr == NULL){
		printf("Error! opening file");
		}
	
		int current_size=50;
		rarr= (record *)malloc(sizeof(record)*current_size);
		count=0;

	
		int i=0;
		while(fscanf(fptr,"\"%llu,%[^,],%u/%u,%[^,],%[^\"]\"\n",&rarr[i].num,rarr[i].code,&rarr[i].mm,&rarr[i].yy,rarr[i].first,rarr[i].last)!=EOF){
			
			//printf("%llu,%s\n",rarr[i].num,rarr[i].code);
			count++;
			//printf("count:%d\n",count);
			if(count >= current_size){
				current_size=10*current_size ;
				rarr=(record *)realloc(rarr,sizeof(record)*current_size);
				}
			
			i++;	
			}
			
					
		fclose(fptr);
	}

			
			
	
