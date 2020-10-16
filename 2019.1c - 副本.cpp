#include<stdio.h>
int main()
{
	int  n, sum=0, f[100]={1,1,2};
	for(n=3;n<=100;n++)
	{
       f[n]=f[n-1]+f[n-3]-2*f[n-2];
     if(f[n]<0)
     sum++;
		
	}
	printf("%d=sum",sum);
	return 0;
	
 } 
