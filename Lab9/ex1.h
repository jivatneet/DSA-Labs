#ifndef _HASHH
#define _HASHH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int min[2];
int size_book;
int hashfn(char *input,int baseNumber,int tableSize);
int collisioncount(char **input,int baseNumber,int tableSize);
char **parse(char *input);

#endif
