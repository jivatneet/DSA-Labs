#include "element.h"
#include "readElement.h"

int find_min(int x,int y){
	return (x<y)?x:y;
	}
	
int exists(const char *fname){
	
	FILE  *fp;
	if(fp=fopen(fname,"r")){
		fclose(fp);
		return 1;
		}
	return 0;
	}
	
void MergeSortFile(char *input,int num){

	int no_files=num ;
	
	int curr_size;		//for storing current size of the subarray of files
	int left_index;
	char infile1[20],infile2[20],infile3[20]; //for storing filennames
	
	for(curr_size=1; curr_size<=no_files-1; curr_size=2*curr_size){
	
		for(left_index=0;left_index<no_files-1;left_index += 2*curr_size){
		
			int mid=left_index +curr_size-1;
			int right=find_min(left_index +2*curr_size -1,no_files-1);
		
		int n1=mid -left_index +1;
		int n2=right-mid;
		
		sprintf(infile1,"data:%d_%d",left_index,mid);
		sprintf(infile2,"data:%d_%d",mid+1,right);
		sprintf(infile3,"data:%d_%d",left_index,right);
		
		printf("%d %d %d %s %s %s\n",left_index,mid,right,infile1,infile2,infile3);
		
		if(!(exists(infile1) && exists(infile2)))
		continue;
		
		mergeFiles(infile1,infile2,infile3);
	
		}
	}
	
	printf("The sorted output file is %s\n",infile3);
}
		
		
		
		
		
		
