#include "employee.h"

void swap ( emp* a, emp* b ) 
{ 
    emp t = *a; 
    *a = *b; 
    *b = t; 
} 
void QuickSortIter(emp arr[],int l,int h){
	 // Create an auxiliary stack 
    int stack[ h - l + 1 ]; 
  
    // initialize top of stack 
    int top = -1; 
  
    // push initial values of l and h to stack 
    stack[ ++top ] = l; 
    stack[ ++top ] = h; 
  
    // Keep popping from stack while is not empty 
    while ( top >= 0 ) 
    { 
        // Pop h and l 
        h = stack[ top-- ]; 
        l = stack[ top-- ]; 
  
        // Set pivot element at its correct position 
        // in sorted array 
        
       /* if((h-l+1)<=s)
        	continue;*/
        	
        int p = partition( arr, l, h ); 
  
        // If there are elements on left side of pivot, 
        // then push left side to stack 
        if ( p-1 > l ) 
        { 
            stack[ ++top ] = l; 
            stack[ ++top ] = p - 1; 
        } 
  
        // If there are elements on right side of pivot, 
        // then push right side to stack 
        if ( p+1 < h ) 
        { 
            stack[ ++top ] = p + 1; 
            stack[ ++top ] = h; 
        } 
  	}
  }
	
	
	
int partition(emp arr[],int p,int r){

	
	int x=arr[r].empID;
	emp temp;
	int i=p-1;
	
	for(int j=p;j<=r-1;j++){
		if(arr[j].empID<=x){
			i=i+1;
			swap(&arr[i],&arr[j]);
			}
		}
		swap(&arr[++i],&arr[r]);
		
		return i+1;
	}
