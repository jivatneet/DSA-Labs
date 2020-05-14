#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include "readRecords.h"
#include "insertionSort.h"
unsigned int maxStackLocation ;  
unsigned int minStackLocation ;  
void *currptr;
int main()
{

struct timeval t1, t2;
double elapsedTime;

// start timer
gettimeofday(&t1, NULL);

readRecords("10.txt");

// stop timer
gettimeofday(&t2, NULL);

// compute and print the elapsed time in millisec
elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;
elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;
printf("Total time for reading records is %f ms\n" ,elapsedTime);

FILE *fptr;
fptr = fopen("output.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}

fprintf(fptr,"Total time for reading records is %f ms\n",elapsedTime);
fclose(fptr);

	int a;                                    //measuring bottom of stack
	currptr=(void *)(&a);
	maxStackLocation= *(unsigned int *)(&currptr);
	minStackLocation =maxStackLocation;
	printf("maxstack:%u\n",maxStackLocation);
	
measureTime();          //measuring time of insertion sort

printf("The total stack space used is:%u\n",maxStackLocation-minStackLocation);

/*for(int i=0;i<count;i++){
	printf("%llu,%s,%u,%u,%s,%s\n",rarr[i].num,rarr[i].code,rarr[i].mm,rarr[i].yy,rarr[i].first,rarr[i].last);
	}*/

return 0;
}
