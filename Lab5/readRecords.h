#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _REC
#define _REC
int count;
void readRecords() ;
void measureTime();
	
	typedef struct record{
		long long int num;
		int mm,yy ;
		char code[6]; 
		char first[10];
		char last[10];
		}record;
		
record *rarr;

#endif
