#include "readRecords.h"
extern unsigned int maxStackLocation ; 
extern unsigned int minStackLocation ;

unsigned int measureSpace(void *a){

	unsigned int currStackLocation= *(unsigned int*)(&a);
	printf("current:%u\n",currStackLocation);
	
	if(currStackLocation < minStackLocation)
		minStackLocation=currStackLocation;
		
	printf("min:%u\n",minStackLocation);
		
		return maxStackLocation-minStackLocation;
	}
