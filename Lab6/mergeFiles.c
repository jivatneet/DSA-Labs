#include "element.h"
#include "readElement.h"

void mergeFiles(const char *f1,const char *f2,const char *f3){
	
	FILE *in1=fopen(f1,"r");
	FILE *in2=fopen(f2,"r");
	FILE *out=fopen(f3,"w");
	
	if(in1==NULL){
		printf("Unable to open file %s for merging\n",f1);
		exit(0);
		}
	else if(in2==NULL){
		printf("Unable to open file %s for merging\n",f2);
		exit(0);
		}
		
	else if(out==NULL){
		printf("Unable to open file %s for merging\n",f3);
		exit(0);
		}
	
	Element *r1=(Element *)malloc(sizeof(Element));
	Element *r2=(Element *)malloc(sizeof(Element));
	
	int x=fscanf(in1,"%[^,],%f\n",r1->name,&(r1->CGPA));
	int y=fscanf(in2,"%[^,],%f\n",r2->name,&(r2->CGPA));
		
	while(x!=EOF && y!=EOF){
		
		if(r1->CGPA<=r2->CGPA){
			fprintf(out,"%s,%f\n",r1->name,r1->CGPA);
			//printf("%s,%f\n",r1->name,r1->CGPA);
			x=fscanf(in1,"%[^,],%f\n",r1->name,&(r1->CGPA));
			}
			
		else{
			fprintf(out,"%s,%f\n",r2->name,r2->CGPA);
			//printf("%s,%f\n",r2->name,r2->CGPA);
			y=fscanf(in2,"%[^,],%f\n",r2->name,&(r2->CGPA));
			}
			
		}
		
		while(x!=EOF && y==EOF){
			fprintf(out,"%s,%f\n",r1->name,r1->CGPA);
			x=fscanf(in1,"%[^,],%f\n",r1->name,&(r1->CGPA));
		}
		
		while(x==EOF && y!=EOF){
			fprintf(out,"%s,%f\n",r2->name,r2->CGPA);
			y=fscanf(in2,"%[^,],%f\n",r2->name,&(r2->CGPA));
		}
		
		
		fclose(in1);
		fclose(in2);
		fclose(out);
	}
		
			
		
		
		
	
		
	
