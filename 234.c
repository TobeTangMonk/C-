#include<stdio.h>
int main()
{
int fat(int n);
int n,i,s=0;
scanf("%d",&n);
for(i=0;i<=n;i++) 
s=s+fat(i);
printf("%d",s);
return 0;
}
int fat(int n)
{
	int i,f;
	for(i=0;i<=n;i++)
	f=f*i;
	return f;
}
