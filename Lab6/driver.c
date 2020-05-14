#include <sys/time.h>
#include "element.h"
#include "readElement.h"
unsigned int maxStackLocation ;  
unsigned int minStackLocation ;  
void *currptr;
int count;

int main(int argc,char *argv[]){

	readElement("20");
	
	struct timeval t1, t2;
	double elapsedTime;

// start timer
	gettimeofday(&t1, NULL);
	
	int a;                                    //measuring bottom of stack
	currptr=(void *)(&a);
	maxStackLocation= *(unsigned int *)(&currptr);
	minStackLocation =maxStackLocation;
	printf("maxstack:%u\n",maxStackLocation);
	
	MergeSort(A,0,count-1);
	
	for(int i=0;i<count;i++){
		printf("%s,%f\n", A[i].name,A[i].CGPA);
		}

// stop timer
	gettimeofday(&t2, NULL);

// compute and print the elapsed time in millisec
	elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;
	elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;
	printf("Total time for MS is %f ms\n" ,elapsedTime);

	
	printf("The total stack space used is:%u\n",maxStackLocation-minStackLocation);
	
	}
	
