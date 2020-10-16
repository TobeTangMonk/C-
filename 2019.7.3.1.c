//#include<stdio.h>
//#define N 5
//int main()
//{
//	int a[N];
//	
//	int i;
//	printf("please input a a[5]:");
//	for(i=0;i<5;i++)
//	scanf("%d",&a[i]);
//	printf("%d",a[i]);
//	int temp;
//	for(i=0;i<N/2;i++)
//	{temp=a[i];
//	a[i]=a[N-1-i];
//	a[N-i-1]=temp; 
//		
//	}
//		printf("\nnow you array is\n");
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;
// } 



//#include<stdio.h>
//#define N 10
//int main()
//{
//	int a[N][N];
//	int i,j;
//	for(i=0;i<N;i++)
//	{
//		a[i][0]=1;
//		a[i][i]=1;
//	}
//	for(i=2;i<N;i++)
//	{for(j=1;j<=i-1;j++)
//	a[i][j]=a[i-1][j]+a[i-1][j-1];
//	}
//	for(i=0;i<N;i++)
//	{for(j=0;j<=i;j++)
//	printf("%6d",a[i][j]);
//	printf("\n");
//	return 0;
//	
//}
//	
//}

#include<stdio.h>
int main()
{
	int a[3][80],upp,low,dig,leh;
	int i,j;
	for(i=0;i<3;i++)
	{printf("please the line is:");
	}
	for(j=0;j<80 && a[i][80]!='\0';j++ )
	{
		if(a[i][j]>'0' && a[i][j<'80'])
		upp++;
		if(a[i][j]>'a' && a[i][j]<'z')
		low++;
		if(a[i][j]>'A' && a[i][j]<'Z')
		oth++;
	}
}
