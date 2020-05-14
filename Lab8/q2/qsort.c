#include "qsort.h"
extern int size;

void printArray(int* studArray, int arrSize)
{
	// printing the array
	int i = 0;
	for(i=0;i<arrSize;i++)
	{
		printf("Arr[%d] is %d\n", i, studArray[i]);
	}
}

int* readData(char * fileName){
	FILE *fptr=fopen(fileName,"r");
	if(!fptr){
		printf("error reading file\n");
		exit(0);
		}
	
	int no_data;
	fscanf(fptr,"%d\n",&no_data);
	size=no_data;
	char name[3];
	
	int *arr=(int *)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		fscanf(fptr,"%s	%d\n",name,&arr[i]);
		}
		
	return arr;
	}
