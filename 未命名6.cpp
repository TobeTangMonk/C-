#include<stdio.h>
int main()
{
	int a[1000]={1};
	int i,j,n,k=0,1=0;
	scanf("d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=1;j++)
		{
			a[j]=a[j]*i+k;
			k=a[j]/10000;
			a[j=a[j]%10000;
		}
		if(k)
		{
		l++
		a[l]=k;
		k=0;
		}
		printf("%d",a[l]);
		for(j=l-1;j>=0;j--)
		printf("%04d",a[j]);
		return 0;
	}
	
}
