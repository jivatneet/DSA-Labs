#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#ifndef HEAP
#define HEAP
extern int space ;

struct linkedlist *createList(int n);
typedef struct node{
	int val;
	struct node * next;
}node;

struct linkedlist{
	int count;
	node* first;
	};
	
void * myalloc(int M);
void myfree(void *a);

#endif
