#include "List.h"
extern int globalCounter;

List createList(Student studArray, int arraySize){
	List stud_list=(List)myalloc(sizeof(struct list));
	stud_list->count=0;
	stud_list->last=NULL;
	
	Node temp=(Node)malloc(sizeof(struct node));
	temp->record=(Student)myalloc(sizeof(struct student));
	temp->record->name=studArray[0].name;
	temp->record->marks=studArray[0].marks;
	stud_list->first=temp;
	stud_list->count++;
	Node dup=stud_list->first;

	
	for(int i=1;i<arraySize;i++){
		temp=(Node)myalloc(sizeof(struct node));
		temp->record=(Student)myalloc(sizeof(struct student));
		dup->next=temp;
		temp->record->name=studArray[i].name;
		temp->record->marks=studArray[i].marks;
		stud_list->count++;
		dup=temp;
		}
		
	stud_list->last=temp;
	}
	
void insertInOrder(List list, Node newNode){
	Node temp=list->first;
	Node prev;
	
	printf("count:%d\n",list->count);
	if(!temp){
	printf("null\n");
		list->first=newNode;
		list->last=newNode;
		newNode->next=NULL;
		list->count++;
		printf("count:%d\n",list->count);
		return;
		}
	
	printf("out while\n");	
	while((newNode->record->marks >= temp->record->marks) && (temp->next)){
		printf("while\n");
		prev=temp;
		temp=temp->next;
		}
		
		if(temp==list->first && (newNode->record->marks < temp->record->marks)){
			printf("first\n");
			newNode->next=temp;
			list->first=newNode;
			list->count++;
			return;
			}
		
		if(temp->next==NULL && (newNode->record->marks >= temp->record->marks)){
		printf("last node\n");
			temp->next=newNode;
			list->last=temp->next;
			newNode->next=NULL;
			list->count++;
			return;
			}
			
		/*if(temp->next==NULL && (temp==list->first)){
		printf("first and next null\n");
			temp->next=newNode;
			list->last=temp->next;
			newNode->next=NULL;
			list->count++;
			return;
			}*/
			
		else
		{	printf("middle\n");
			prev->next=newNode;
			newNode->next=temp;
			list->count++;
			return;
			}
			
			
	}
	
List insertionSort(List list){

	if(!(list->first))
		return list;
		
	List dup=(List)myalloc(sizeof(struct list));
	Node temp=(Node)myalloc(sizeof(struct node));
	temp->record=(Student)myalloc(sizeof(struct student));
	temp->record->name=list->first->record->name;
	temp->record->marks=list->first->record->marks;
	printf("%s %f\n",temp->record->name,temp->record->marks);
	dup->first=NULL;
	printf("1\n");
	insertInOrder(dup,temp);
	printf("2\n");
	Node mov_l=list->first;
	printf("3\n");
	while(mov_l){
	printf("4\n");
		mov_l=mov_l->next;
		temp=mov_l;
		printf("5\n");
		insertInOrder(dup,temp);
		}
		printf("6\n");
	
	
	return dup;
	}
	
	
	
double measureSortingTime(List list){

	struct timeval t1,t2;
	double elapsedtime;
	
	gettimeofday(&t1,NULL);
	
	list=insertionSort(list);
	
	gettimeofday(&t2,NULL);
	
	elapsedtime=(t2.tv_sec-t1.tv_sec)*1000.0;
	elapsedtime=(t2.tv_usec-t1.tv_usec)/1000.0;
	
	return elapsedtime;
	}
	
void * myalloc(int size){
	void * A=malloc(size+4);
	int * temp=A;
	*temp=size;
	//printf("Allocating: %d\n",*temp);
	globalCounter=globalCounter+ size ;
	return A+4;
	}
	
void myfree(void *ptr){
		
		ptr=ptr-4;
		int * temp=ptr;
		//printf("De-Allocating: %d\n",*temp);
		globalCounter-= *temp;
		free(ptr);
		}
		
			
	
	
	
