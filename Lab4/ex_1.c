#include "heap.h"
#include "cycle.h"
void p();
void g();
void h();
void d();
int space=0;
int bits=1;
int main(){
	/*srand(time(0));
	for(int i=1;i<100;i++){
		int M=(rand()%15001)+10000;
		int* A=myalloc(sizeof(int)*M);
		printf("%u  %u\n",A,&(A[M-1]));
		myfree(A);
	}*/
	
	printf("Enter linked list size:");
	int size;
	scanf("%d",&size);
	printf("\n");
	struct linkedlist* ls_new=createList(size);
	ls_new=createCycle(ls_new);
	
	
	struct timeval t1,t2;
	double elapsedTime ;
	gettimeofday(&t1,NULL);
	
	int cyc=testCyclic(ls_new);
	
	gettimeofday(&t2,NULL);
	elapsedTime= (t2.tv_sec -t1.tv_sec)*1000.0 ;
	elapsedTime += (t2.tv_usec - t1.tv_usec)/1000.0 ;
	printf("Total time to test cycle is %f ms.\n", elapsedTime);
	printf("Size N is %d\n",size);
	printf("Space used is %d\n",space);
	
	
	ls_new=makeCircularList(ls_new);
	
	return 0;
}



	
