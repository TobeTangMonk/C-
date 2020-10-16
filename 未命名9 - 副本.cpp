#include<stdio.h>
#include<math.h>
int main()
{
int sum=0,i,n,flag,k;
 for(n=667;n<=777;n=n+2)
 {
 	flag=1;
 	k=sqrt(n);
 	for(i=2;i<=k;i++)
 	if(n%i==0)
 	{
 		flag=0;
 		break;
	 }
	 if(i>k) sum++;
	 }	
	 printf("sum=%d",sum);
	 return 0;
}
