#include "employee.h"

void insertionSort(emp arr[],int n){

	int i,j;
	emp key;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		
		
	while(j>=0 && arr[j].empID>key.empID){
	
		arr[j+1].empID=arr[j].empID;
		strcpy(arr[j+1].name,arr[j].name);
		j=j-1;
	   }
	
		arr[j+1].empID=key.empID;
		strcpy(arr[j+1].name,key.name);
		
	}
}
