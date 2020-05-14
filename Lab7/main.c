#include "employee.h"
#include "cutoff.h"
int count;

int main(int argc,char *argv[]){

		readEmp(argv[1]);
		
		FILE *fout=fopen(argv[2],"a");
		int size_f=atoi(argv[1]);
		//QuickSortIter(emp_arr,count,1);
		/*QuickSortIter(emp_arr,count,4);
		for(int i=0;i<count;i++){
			printf("%s %d\n",emp_arr[i].name,emp_arr[i].empID);
		
			}
			
		printf("\n");
		
		insertionSort(emp_arr,count);
		for(int i=0;i<count;i++)
			printf("%s %d\n",emp_arr[i].name,emp_arr[i].empID);*/
		int mid=estimateCutoff(emp_arr,1,size_f);
		printf("The cutoff point is %d\n",mid);	
		fprintf(fout,"The cutoff point for N=%d is %d\n",size_f,mid);
		
		}
	
