#include "heap.h"

void * myalloc(int M){
	void * A=malloc(M+4);
	int * temp=A;
	*temp=M;
	//printf("Allocating: %d\n",*temp);
	space=space+ M ;
	return A+4;
	}
	
void myfree(void *a){
		
		a=a-4;
		int * temp=a;
		//printf("De-Allocating: %d\n",*temp);
		space-= *temp;
		free(a);
		}
		

	
	
