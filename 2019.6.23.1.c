#include<stdio.h>
#define N 5
int main()
{
	int a[N][N]={
	{0,1,1,1,1},
	{2,0,1,1,1},
	{2,2,0,1,1},
	{2,2,2,0,1},
	{2,2,2,2,0},
	};
   int i,j;
   int sum1=0,sum2=0;
   for(i=0;i<N;i++)
   {
   	for(j=i;j<N;j++)
   	{
	   
   	sum1+=a[i][j];
 
   }
   }
   for(i=0;i<N;i++)
   {
   	 for(j=0;j<i;j++)
   	 {
	    
   	 sum2+=a[i][j];
   	
   }
   	 
   }
   for(i=0;i<N;i++)
   {
   	for(j=0;j<N;j++)
   	{
	   
   	printf("%d",a[i][j]);
       }
   	printf("\n");
   	
   }
 printf("上三角元素之和：%d\n",sum1);
     printf("下三角元素之和：%d\n",sum2);
     return 0;
 
 } 
