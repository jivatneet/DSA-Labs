#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
#include <math.h>
#ifndef _EMP
#define _EMP

typedef struct emp{
	char name[11];
	int empID;
	}emp;
	
emp *emp_arr;
void readEmp(char* input);
int pivot(emp arr[],int l,int h);
int partition(emp arr[],int p,int r);
void insertionSort(emp arr[],int n);
void swap ( emp* a, emp* b );
void QuickSortIter(emp arr[],int size,int thresh);


#endif
