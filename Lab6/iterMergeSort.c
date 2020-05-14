#include "element.h"
#include "readElement.h"
extern void *currptr;
extern unsigned int maxStackLocation ;  
extern unsigned int minStackLocation ; 
unsigned int currStackLocation;

int find_min(int x,int y){
	return (x<y)?x:y;
	}
	
void MergeSort(Element A[],int p,int r){  

	int n=r-p+1;    //size of array
	int curr_size; //For current size of subarrays to be merged, curr_size varies from 1 to n/2 
	int left_start; //for picking starting index of left subarray to be merged
	
	for(curr_size=1;curr_size<=n-1;curr_size=2*curr_size){
		
	//pick starting point of different subarrays of current size
		for(left_start=0;left_start<n-1;left_start+=2*curr_size){
		
		//finding ending pint of left subarray.mid+1 is starting point of right
		int mid=left_start +curr_size -1;
		int right=find_min(left_start +2*curr_size -1,n-1);
		
		int n1=mid -left_start +1;
		int n2=right-mid;
		
		
		Element Ls1[n1];
		Element Ls2[n2];
		Element Ls[n1+n2];
		
		currptr=(void *)(Ls) ;			//calculating bottom of stack
		currStackLocation= *(unsigned int*)(&currptr);
		//printf("current:%u\n",currStackLocation);
	
		if(currStackLocation < minStackLocation)
		minStackLocation=currStackLocation;
		
		//printf("min:%u\n",minStackLocation);
		
		
		for(int i=0;i<n1;i++)
			Ls1[i]=A[left_start+i];
			
		for(int j=0;j<n2;j++)
			Ls2[j]=A[mid+j+1];
			
		merge(Ls1,n1,Ls2,n2,Ls);
		for(int i=0;i<n1+n2;i++){
			A[left_start+i]=Ls[i];
			}
		}
	}
}
