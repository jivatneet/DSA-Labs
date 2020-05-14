#ifndef _ELEM
#define _ELEM
#include "element.h"

void readElement(char* input);
extern void MergeSort(Element A[],int p,int r);
void merge(Element Ls1[], int sz1, Element Ls2[], int sz2, Element Ls[]);
int sortSmall(char *input,int K);
void mergeFiles(const char *f1,const char *f2,const char *f3);
void MergeSortFile(char *input,int num);

extern int exists(const char *fname);
extern int find_min(int x,int y);

#endif
