#include "element.h"
#include "readElement.h"

void merge(Element Ls1[], int sz1, Element Ls2[], int sz2, Element Ls[]){

	int i=0,j=0;
	int k=0;

	while(i<sz1 && j<sz2){
	
		if(Ls1[i].CGPA<=Ls2[j].CGPA){
			Ls[k]=Ls1[i];
			i=i+1;
			}
			
		else
			{Ls[k]=Ls2[j] ;
			j=j+1;
			}
			
		k++;
		}
			
		while(j<sz2){
			Ls[k]=Ls2[j];		
			j++;
			k++;
			}
		
		while(i<sz1){
			Ls[k]=Ls1[i];		
			i++;
			k++;
			}
			
	}
