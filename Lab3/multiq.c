#include "multiq.h"

MultiQ createMQ(int n){
	MultiQ mq;
	printf("a");
	for(int i=0; i<n; i++){
		mq.Q[i]=*(newQ()) ;
		(mq.Q[i]).head= (mq.Q[i]).tail ;
	}
	return mq;
}
		
MultiQ addMQ(MultiQ mq, Task t){
	int p =t.priority ;
	addQ(&(mq.Q[p-1]),t.tid) ;
return mq ;
}

Task nextMQ(MultiQ mq){
	Task t;
	for(int i=num-1; i>=0; i--){
		if (!(isEmptyQ(&(mq.Q[i])))){
	Element e=front(mq.Q[i]);
	t.priority= i+1;
	t.tid= e.key ;
	return t;
	}
  }
	
}

MultiQ delNextMQ(MultiQ mq){

	for(int i=num-1; i>=0; i--){
		if (!(isEmptyQ(&(mq.Q[i])))){
	Queue * dup= &(mq.Q[num-1]);
	dup=delQ(dup);
	mq.Q[num-1]=*dup ;
	return mq;
	}
    }
}

int isEmptyMQ(MultiQ mq){
	for(int i=num-1; i>=0; i--){
		if (!(isEmptyQ(&(mq.Q[i]))))
			break;
			
		else return 1;
	}
}
	
	
	
int sizeMQ(MultiQ mq){
		int count=0;
		for(int i=num-1; i>=0; i--){
			count= count+ ((mq.Q[i]).length);
	}
	
	return count;
}
	
Queue getQueueFromMQ(MultiQ mq, int p){
	return mq.Q[p-1] ;
}


