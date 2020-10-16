#include<stdio.h>
int main()
{
	char c;
	int n=100;
	float f=10.0;
	double x;
	x=f*=n/=(c=50);
	printf("%d,%f\n,n,x");
	
	return 0;
}
