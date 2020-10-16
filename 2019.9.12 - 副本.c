#include<stdio.h>
typedef int ElemType;
typedef struct linknode
{
	ElemType data;
	struct linknode *next;
}linknode;
int main() 
{  

linknode *L;
	initlist(&L);
	
}
void initlist(linknode *L)
{
	L=(linknode *)malloc(sizeof(linknode));
	L->next=NULL;
}
