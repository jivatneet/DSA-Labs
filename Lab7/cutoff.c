#include "cutoff.h"
extern int count;

double* testRun(emp arr[],int size){
	
	emp dup[size];
	for(int i=0;i<size;i++){
		dup[i]=arr[i];
		}
		
	struct timeval t1, t2;
	double elapsedTimeIS;
	double elapsedTimeQS;
// start timer
	gettimeofday(&t1, NULL);

	insertionSort(arr,size);
	
	// stop timer
	gettimeofday(&t2, NULL);
	
// compute and print the elapsed time in millisec
	elapsedTimeIS = (t2.tv_sec - t1.tv_sec) * 1000.0;
	elapsedTimeIS += (t2.tv_usec - t1.tv_usec) / 1000.0;
// sec to ms
// us to ms

	gettimeofday(&t1, NULL);
	QuickSortIter(dup,size,0);		//running default quicksort
	gettimeofday(&t2, NULL);
	
	elapsedTimeQS = (t2.tv_sec - t1.tv_sec) * 1000.0;
	elapsedTimeQS  += (t2.tv_usec - t1.tv_usec) / 1000.0;
	
	double *time_arr=(double *)malloc(sizeof(double)*2);
	time_arr[0]=elapsedTimeIS;
	time_arr[1]=elapsedTimeQS;
	
		return time_arr;
	}
	
int estimateCutoff(emp arr[],int min,int max){
		double *tt1=(double *)malloc(sizeof(double)*2);
		double *tt2=(double *)malloc(sizeof(double)*2);
		
		//int min=0;
		//int max=10000;
		int mid;
		tt1=testRun(arr,min);
		printf("InsertionSort:%f QuickSort:%f\n",tt1[0],tt1[1]);
		tt2=testRun(arr,max);
		printf("InsertionSort:%f QuickSort:%f\n",tt2[0],tt2[1]);
		
	do{
		mid=(min+max)/2;
		tt1=testRun(arr,mid);
		//printf("InsertionSort:%f QuickSort:%f\n",tt1[0],tt1[1]);
		if(tt1[0]<tt1[1]){
			min=mid;
			}
		else
			max=mid;
			}while(fabs(tt1[0]-tt1[1])>0.001);
			
		return mid;
		}
		
	
