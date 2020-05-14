#include "element.h"
#include "readElement.h"

int sortSmall(char *input,int K){
	
	FILE *fptr=fopen(input,"r");

	if (fptr == NULL){
		printf("Error! opening file");
		}
	
		int current_size=K;
		A= (Element *)malloc(sizeof(Element)*current_size);
		Element *buff;
		
		int count=0, i=0;
		int filenum=1;
		while(fscanf(fptr,"%[^,],%f\n",A[i].name,&A[i].CGPA)!=EOF){
		
			count++;
			
			if(count>=K){
				MergeSort(A,(filenum-1)*K,K*filenum-1);
			
				char file_no[20];    //generating new output file
				sprintf(file_no,"data:%d_%d",filenum-1,filenum-1);
				FILE *fout=fopen(file_no,"w");
				if (fout == NULL){
				printf("Error! opening file %s\n",file_no);
				}
				
				for(int j=(filenum-1)*K ;j< K*filenum ;j++){
				fprintf(fout,"%s,%f\n",A[j].name,A[j].CGPA);
				}
				
				current_size=2*current_size;
				buff=(Element *)realloc(A,sizeof(Element)*current_size);
				if(buff){
					A=buff;
					}
					
				count=0;
				filenum++;
				}
			
			i++;
			}
	
	
				if(count <K && filenum==1){
				MergeSort(A,0,count-1);
				char file_no[10];
				sprintf(file_no,"output_%d",filenum);
				
				FILE *fout=fopen(file_no,"w");
				if (fout == NULL){
				printf("Error! opening file %s\n",file_no);
				}
				
				for(int i=0;i<count;i++){
				fprintf(fout,"%s,%f\n",A[i].name,A[i].CGPA);
				}
			}
		
	return filenum-1;	
		}
