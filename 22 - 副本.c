#include<stdio.h>
int main()
{
	int x=1,y=1,a=6,b=4;
	y=(a>b&&x++);
	printf("%d%d\n",x,y);
	y=(a<b&&x++);
	printf("%d,%d\n",x,y);
	y=(a<b||x++);
	printf("%d%d\n",x,y);
	y=(a>b||x++);
	printf("%d,%d\n",x,y);
	return 0;
	
}
