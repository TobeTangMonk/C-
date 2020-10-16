#include<stdio.h>
int main()
{
	
	int m,a,b,c;
	scanf("%d",&m);
	
	c=m/100;
	b=(m%100)/10;
	a=m%10;
	printf("%d",a*100+b*10+c);
	return 0;
}
