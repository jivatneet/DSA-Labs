/* driver.c */
#include <stdio.h>
#include "linkedlist.h"
int main(int argc, char *argv[])
{
// Create a file pointer and open the file read as command line argument.
printf("a");
FILE* fileptr = fopen(argv[1], "r");
// Declare a pointer to a linked list (head) and allocate memory to it.
printf("a");
struct linkedList * head = (struct linkedList*)malloc(sizeof(struct linkedList));
// In a loop read the file and insert elements into the linkedList.
printf("a");
while (!feof(fileptr))
{
// read the next element and store into the temp variable.
int temp;
fscanf(fileptr, "%d", &temp);
// insert temp into the linked list.
printf("a");
insertFirst(head,temp);
}
// close the file pointer
fclose(fileptr);
printList(head) ;
// print the linked list.
//head ->first =deleteFirst(head) ;
// delete the first element of the linked list.
//printList(head) ;
// print the linked list again to check if delete was successful.
// print the linked list to a new file.
return 0;
}
