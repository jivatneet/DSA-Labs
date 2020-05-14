#include "element.h"
#include "readElement.h"

void readElement(char* input){
	FILE *fptr=fopen(input,"r");

	if (fptr == NULL){
		printf("Error! opening file");
		}
	
		int current_size=1024;
		A= (Element *)malloc(sizeof(Element)*current_size);
		count=0;
		int i=0;
		
		
		while(fscanf(fptr,"%[^,],%f\n",A[i].name,&A[i].CGPA)!=EOF){
			
			count++;
			//printf("%d:%s,%f\n", count,A[i].name,A[i].CGPA);
			if(count>=current_size){
				current_size*=10;
				A=(Element *)realloc(A,sizeof(Element)*current_size);
				}
				
			i++;
		}
		
		fclose(fptr);
	}

			
			
	
