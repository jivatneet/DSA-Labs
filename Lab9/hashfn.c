#include "ex1.h"

int hashfn(char *input,int baseNumber,int tableSize){
	
	int i=0,sum=0;
	while(input[i]!='\0'){
		sum=sum+input[i];
		//printf("%d\n",sum);
		i++;
		}
		
	int hash=sum%baseNumber;
	hash=hash%tableSize;
	
	return hash;
	
   }
