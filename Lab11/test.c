#include "dns.h"

int main(){
	char arr[3][4];
	char arr2[5][6];
	arr2[1]="hello";
	int a=1,b=2;
	
	arr[a][b]=arr2[a][b];
	printf("%c\n",arr[a][b]);
	
	}
