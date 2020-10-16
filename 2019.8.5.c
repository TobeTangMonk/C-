//include<stdio.h>
//int main()
//{
//	int a[20];
//	printf("please input n ge shu:");
//	s
//	
//	
//	
//}
// #include <stdio.h>
//int main( ) 
//{
//	int arr[25],n,i,j;
//	for(i=0;;i++)
//	{
//		scanf("%d",&n);
//		if(n==0)
//			break;
//		arr[i]=n;
//	}
//	for(j=i-1;j>=0;j--)
//		printf("%d ",arr[j]);
//	return 0;
//}
#include <stdio.h>
 
 slove(int n)
{
	scanf("%d",&n);
	if(n==0) 
	return 0;
	else slove(n);
	printf("%d ",n);
}
 
int main( )
{
	slove(0);//调用函数，传递什么数值并不重要 
	return 0;
}
//#include<stdio.h>
//int main()
//{slove(0);
//return 0;
//	
//	
// } 
// 
 

