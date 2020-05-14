#include "element.h"
#include "readElement.h"
extern void *currptr;
extern unsigned int maxStackLocation ;  
extern unsigned int minStackLocation ; 
unsigned int currStackLocation;

void MergeSort(Element A[],int p,int r){
	
	if (p<r){
		int q=(p+r)/2;
		
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		
		int n1=q-p+1;
		int n2=r-q;
		
		Element Ls1[n1];
		Element Ls2[n2];
		Element Ls[n1+n2];
		
		//calculating stack space
		
		                         
		/*currptr=(void *)(Ls) ;			//calculating bottom of stack
		currStackLocation= *(unsigned int*)(&currptr);
		//printf("current:%u\n",currStackLocation);
	
		if(currStackLocation < minStackLocation)
		minStackLocation=currStackLocation;*/
		
		//printf("min:%u\n",minStackLocation);
		
		for(int i=0;i<n1;i++)
			Ls1[i]=A[p+i];
			
		for(int j=0;j<n2;j++)
			Ls2[j]=A[q+j+1];
		
		merge(Ls1,n1,Ls2,n2,Ls);
	
		for(int i=0;i<n1+n2;i++){
			A[p+i]=Ls[i];
			}
			
		}
		
		else
			return;
	}
		
			
		
		
