#include <sys/time.h>
#include "insertionSort.h"
extern int count;

void measureTime(){

struct timeval t1, t2;
double elapsedTime;

// start timer
gettimeofday(&t1, NULL);

insertionSort(rarr,count);

// stop timer
gettimeofday(&t2, NULL);

// compute and print the elapsed time in millisec
elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;
elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;
printf("Total time for insertionSort is %f ms\n" ,elapsedTime);

FILE *fptr;
fptr = fopen("time.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}

fprintf(fptr,"Total time for insertionSort  is %f ms\n",elapsedTime);

fclose(fptr);

}

