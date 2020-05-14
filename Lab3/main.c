#include <stdio.h>
#include <sys/time.h>
int num;
#include "multiq.h"

int main(){

	printf("Enter the number of Queues:\n");
	printf("a\n");
	int number;
	scanf("%d",&number);
	printf("a\n");
	num=number;
	MultiQ MQ=createMQ(num);
	printf("a");
	
	
	char * dat= "input10.txt" ;
	/*printf("Enter input file name:");
	scanf("%s",dat);
	printf("%s",dat);
	printf("%a");*/
	
	struct timeval t1,t2;
	double elapsedTime ;
	gettimeofday(&t1,NULL);
	
	MultiQ loadData(MQ,dat);
	
	gettimeofday(&t2,NULL);
	elapsedTime= (t2.tv_sec -t1.tv_sec)*1000.0 ;
	elapsedTime += (t2.tv_usec - t1.tv_usec)/1000.0 ;
	printf("Total time to load data is %f ms.\n", elapsedTime);
		
	printf("Enter the number of delete operations:\n");
	int d;
	scanf("%d", &d);
	MultiQ testDel(MQ,d);
		
return 0;
}


MultiQ loadData(MultiQ MQ,char *input){
		FILE *f= fopen(input,"r");
		if(f == NULL){
			printf("Error!\n");
			exit(1);
			}
			
		int id,p;
		Task t;
		
		while(fscanf(f,"%d,%d",&id,&p)!=EOF){
			t.tid= id;
			t.priority= p;
			MQ=addMQ(MQ,t);
		}
		
	fclose(f);
}
		
MultiQ testDel(MultiQ MQ,int n){
	for(int i=0; i<n; i++){
		MQ=delNextMQ(MQ);
		}
	
	return MQ;
}
		
