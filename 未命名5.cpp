#include<stdio.h>
int main()
{
	void intv(int x[],int n)
	int i,a[10]={3,7,9,11,0,3,5,6,};
	printf("The originnal array :\n};
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	intv(a,10);
	printf("the array has been inverted:\n");
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	printf("\n");
	return 0;
	
}
void intv(int x[],int n)
{
	int temp,i,j,m=n-1/2;
	for(i=0,i<=m;i++)
	{
		j=n-1-i;
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
}
