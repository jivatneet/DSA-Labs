#include "ex1.h"

struct record{
	int index;
	int count;
	struct record *next;
	};
	
typedef struct record rec;

struct hashtable{
	rec *head;
	int elementCount;
	int insertionCost;
	int queryingCost;
	};
	
typedef struct hashtable hasht;
hasht* createHash();
hasht* insert(hasht *h,char **A,int i);
int insertAll(hasht *h,char **book);
rec *lookup(hasht *h,char *inp,char **book);
int lookupAll(hasht *h,float m,char **book);

