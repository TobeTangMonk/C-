#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	int sum1,sum2,min,row,colum;
	for(i=0;i<=3;i++)
	for(j=0;j<3;j++)
	scanf("%d",a[i][j]);
	min=a[0][0]
	row=0;
	colum=0;
	
}
      for(i=0;i<=3;i++)
{

for(j=0;j<=3;j++)
if(i>j)
sum+=a[i][j];
if(i=j)
sum2+=a[i][j];
if(min>a[i][j])
 min=a[i][j];
 row=i;
 colum=j;
}
printf("%d%d%d%d%d",sum1,sum2, min,
row,colum);
return 0;
