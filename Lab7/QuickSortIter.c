#include "employee.h"
#include "stack.h"

void swap ( emp* a, emp* b ) 
{ 
    emp t = *a; 
    *a = *b; 
    *b = t; 
} 

void QuickSortIter(emp arr[],int size,int thresh){

	stack s=createStack();
	stackElement t;
	t.l=0;t.h=size-1;
	s=push(s,t);
	int low,high,p;
	
	while(!isEmpty(s)){
	
		t=top(s);
		s=pop(s);
		low=t.l;
		high=t.h;
		
		//printf("low:%d,high:%d\n",low,high);
		if(high-low+1 <thresh)
			continue;
			
		//p=pivot(arr,low,high);
		//printf("pivot:%d\n",p);
		//p=partition(arr,low,high,p);
		p=partition(arr,low,high);
		//printf("partition:%d\n",p);
		
		if(p-1>low){	// If there are elements on left side of pivot,then push left side to stack 
			t.l=low; t.h=p-1;
			s=push(s,t);
			
			}
			
		if(p+1<high){	//If there are elements on right side of pivot,then push right side to stack 
			t.l=p+1; t.h=high;
			s=push(s,t);
		
			}
			
			
		} //end of while
		
	}//end of QS
		

int pivot(emp arr[],int l,int h){
	
	int mid=(h+l)/2;
	if(arr[l].empID<arr[mid].empID){
			if(arr[mid].empID<arr[h].empID)
				return mid;
				
			if(arr[l].empID<arr[h].empID)
				return h;
			else return l;
		}
		
	if(arr[l].empID>arr[mid].empID){
			if(arr[h].empID>arr[l].empID)
				return l;
				
			if(arr[mid].empID<arr[h].empID)
				return h;
			else return mid;
		}
	}
	
/*int partition(emp arr[],int l,int h,int p){
	emp x=arr[p];     //p index of pivot element
	emp temp;
	int i=l-1;
	
	for(int j=l;j<=p-1;j++){
		if(arr[j].empID<=x.empID){
			i=i+1;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
		temp=arr[i+1];
		arr[i+1]=arr[p];
		arr[p]=temp;
		
		return i+1;
	}*/
	
int partition(emp arr[],int p,int r){


	int x=arr[r].empID;
	emp temp;
	int i=p-1;
	
	for(int j=p;j<=r-1;j++){
		if(arr[j].empID<=x){
			i++;
			//swap(&arr[i],&arr[j]);
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
		//swap(&arr[++i],&arr[r]);
		temp=arr[i+1];
		arr[i+1]=arr[r];
		arr[r]=temp;
		
		return i+1;
	}
