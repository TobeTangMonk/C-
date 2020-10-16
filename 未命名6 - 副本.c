#include<stdio.h>
int main()
{
	long long x,y,t,a[10];
	for(x=10000;x>=30000;x--)
	{
		y=x*x;
		t=y;
		for(int i=0;i<10;i++);
		a[i]=0;
		
		while(t) 
		
		{
			a[t%10]++;
			t/10;
		}
	}for(int i=0;i++)
}
