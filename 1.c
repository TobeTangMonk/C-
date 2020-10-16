//#include<stdio.h>
//
//int main()
////{int A;
////	int power(int);
////	int b=3,c,d,m;
////	printf("enter the number a and its power m:\n");
////	scanf("%d%d",&A,&m);
////	c=A*b;
////	printf("%d*%d=%d\n",A,b,c);
////	d=power(m);
////	printf("%d%d**=%d=\n",A,m,d);
////	return 0;
//int n,i;
//char ch='A';
//scanf("%d",&n);
////for(i=1;i<=n;i++)
////scanf("%c",&a[i]);
//while(i==0)
//{
//	for(i=1;i<=n;i++)
//	{
//		printf("%2c",a[i]);
//		ch=ch+1;
//	}
//	n--;
//}
//}
#include<stdio.h>
int main()
{
//	int i,j,n;
//	char ch='A';
//	scanf("%d",&n);
//	while(n>0 &&n<11)
//	{
//	for(i=1;i<=n;i++)
//	
//	{printf("%2c",ch);
//	ch=ch+1;
//	
//	}
//	printf("\n");
//	n--;
//}




	
//	if(n<=11)
//	{
//		for(i=1;i<=n;i++)
//		{
//			for(j=1;j<=n-i+1;j++)
//			{
//				printf("%2c",ch);
//				ch=ch+1;
//			}
//			printf("\n");
//		}
//	}
//	else printf("n is too large! \n");




int n1,n2,t;
scanf("%d%d",&n1,&n2);
if(n1<n2)
{
	t=n1;n1=n2,n2=t;
}

printf("%d",zdgys(n1,n2));
return 0;

}
int zdgys(int n1,int n2)
{
	int y,i;
	for(i=n2;i>=1;i--)
if(n1%i==0&&n2%i==0)
{
	y=i;break;
}
return y;
}









