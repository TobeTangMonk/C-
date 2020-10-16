#include<stdio.h>
#define M 3
#define N 4
int main()
{
	int a[M][N]={1,3,5,7,9,11,13,15,17,19,21,23};
	int i,j,(*p)[N];
	p=a;
	scanf("%d%d",&i,&j);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		printf("",*(*(p+i)+j));
		return 0;
	}
	
}
 
