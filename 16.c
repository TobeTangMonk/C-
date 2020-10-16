#include<stdio.h>
int main()
{
	int a,b;
	float c;
	
	a=5;
	b=a+=a-=a*a;
	c=(double)a/2;
	printf("%d,%d,%f\n",a,b,c);
	
	return 0;
}
