#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	struct node *child;
	struct node *sibling;
	char domain[50];
};

typedef struct node node;

int read_dots(char *in);
void readData(FILE *f);
node *insert(node *root,char *arr);
void insert_ip(node *root,char *ip);
void lookup(FILE *f);
node *look_for(node *root,char *arr,int *child);
int index_global;
