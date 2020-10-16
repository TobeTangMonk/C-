#include<stdio.h>
void invert(int (*p)[3],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	    for(j=0;j<i;j++)
	{
		temp=*(*(p+i)+j);
		*(*(p+i)+j)=*(*(p+j)+i);
		*(*(p+j)+i)=temp;
	}
	int main()
	{
		int a[3][3];
		int i,j;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		invert(a,3);
	
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
             printf("%4d",a[i][j]);	
   printf("\n");
 }
    return 0;
  }
 
 
 
 
