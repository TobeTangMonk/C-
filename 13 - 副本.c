#include<stdio.h>
int main()
{
	int n=1,m,sum,i;
	while(1)
	{
	m=n;
	sum=m;
	for(i=2;i<=8;i++)
	{
	  sum+=m;
	}
	if(sum==765)
	{
		printf("the first has floor  %d\n",n);
		printf("the eight floor has %d\n",m);
	    break;
	
	
	
}
n++;
}
return 0;
}
