#include<stdio.h>
#define max 20
void matrixadd(int n,int A[max,max],int B[max,max],int C[max,max])
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;i<n;j++)
	C[i][j]=A[i][j]+B[i][j];
	
 } 
 #include<stdio.h>

int main()
//{int A;
//	int power(int);
//	int b=3,c,d,m;
//	printf("enter the number a and its power m:\n");
//	scanf("%d%d",&A,&m);
//	c=A*b;
//	printf("%d*%d=%d\n",A,b,c);
//	d=power(m);
//	printf("%d%d**=%d=\n",A,m,d);
//	return 0;
int n,i;
char ch='A';
scanf("%d",&n);
//for(i=1;i<=n;i++)
//scanf("%c",&a[i]);
while(i==0)
{
	for(i=1;i<=n;i++)
	{
		printf("%2c",a[i]);
		ch=ch+1;
	}
	n--;
}
}

