#include<stdio.h>
int main()
{
	int *p,i,a[10];
	printf("please enter 10 integer numbers:");
	p=a;
	for(i=0;i<10;i++)
	scanf("%d",p++);
	for(i=0;i<10;i++,p++)
	printf("%d",*p);
	printf("\n");
	return 0;
}
