#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	FILE *fptr1;
	FILE *fptr2 ;
	fptr1=fopen (argv[1], "r");
	fptr2=fopen (argv[2], "w");
	
	if(fptr1==NULL){
		printf("error opening file,unable to read");
		exit(1) ;
 }
 	
	if(fptr2==NULL){
		printf("error opening file,unable to write");
		exit(1) ;
 }
 
 	char arr[500];
 	fscanf(fptr1, "%[^\n]s", arr);
 	while(!feof(fptr1)){
 	fprintf(fptr2, "\n%s", arr);
	fscanf(fptr1, "%[^\n]s", arr);
	}
	fclose(fptr1);
	fclose(fptr2);
	
}
