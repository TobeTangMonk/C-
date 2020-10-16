#include<stdio.h>
int main()
{
	int a,b,c;
	
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	fflush(stdin);
	
	scanf("%2d%4d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	fflush(stdin);
	
	scanf("%*2d%3d%4d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	fflush(stdin);
	
	return 0;
	
}
