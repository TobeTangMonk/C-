#include<stdio.h>
  int pow(int x,int n)
{
	 int p;
	 if(n==0)p=1;
	 else p=x*pow(x,n-1);
	 return p;	
 } 
 int main()
 {
 	int x,n;
 	scanf("%d%d",&x,&n);
 	printf("%d\n",pow(x,n));
 }
