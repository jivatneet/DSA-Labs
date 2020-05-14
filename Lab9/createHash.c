#include "record.h"

hasht* createHash(){
	hasht *newhash=(hasht *)malloc(sizeof(hasht));
	newhash->elementCount=0;
	newhash->insertionCost=0;
	newhash->queryingCost=0;
		//printf("elemcount:%d \n",newhash->elementCount);
	newhash->head=(rec *)malloc(sizeof(rec )*min[1]);
	rec temp=(newhash->head)[0];
	
	for(int i=1;i<min[1];i++){
		temp.next=NULL;
		temp=(newhash->head)[i];
	}
	
	return newhash;
	}
