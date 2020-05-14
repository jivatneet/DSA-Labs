#include "employee.h"
extern int count;

void readEmp(char* input){
	FILE *fptr=fopen(input,"r");

	if (fptr == NULL){
		printf("Error! Can't read file\n");
		exit(0);
		}
	
		int current_size=10;
		emp_arr=(emp *)malloc(sizeof(emp)*current_size);
		
		int i=0;
		count=0;
		
		while(fscanf(fptr,"%s %d\n",emp_arr[i].name,&(emp_arr[i].empID))!=EOF){
			printf("i:%d\n",i);
			printf("%s %d\n",emp_arr[i].name,emp_arr[i].empID);
			count++;
			//printf("%d\n",count);
			
			if(count>=current_size){
				current_size*=10;
				emp_arr=(emp *)realloc(emp_arr,sizeof(emp)*current_size);
				}
			i++;
			}
			
		fclose(fptr);
	}
	

