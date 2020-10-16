#include<stdio.h>
int main()
{
	
	int x,y;
	scanf("%f",&x);
	
	if(x<=-1)
	y=|x+1|;
	else(-1<x<2)
	y=x*x-1;
	else(x>=2)
	y=2x;
    printf("%f",y);
    return 0;
	
}
