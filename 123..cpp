#include<stdio.h>
#define N 4
#define M 3
int main()
{
	int a[M][N];
	int i,j;
	for(i=0;i<M;i++)
	for(j=0;j<N;j++)
	scanf("%d",a[i][j]);
	for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
	printf("%3d",&a[i][j]);
	printf("\n");
	
  }
return 0;
}
