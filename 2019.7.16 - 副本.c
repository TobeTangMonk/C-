//#include<stdio.h>
//#include<math.h> 
//
//int main()
//{
//	int n;
//	printf("������һ������n:");
//	scanf("%d",n);
//	
//	int a[n];
//	int i,j,k;
//	for(i=0;i<=n;i++)
//	printf("������n������")
//		scanf("%d\t",&a[i]);
//	printf("%d",a[i]);
// for(i=0;i<=n;i++)
// {k=i;
//	for(j=1;j<=i+1;j++)
//	{
//		if(a[k]>a[j])
//		{
//			a[i]=a[j];
//		
//				
//			
//	}printf("�������n%d\n",n);
//	printf("%d",a[i]);
//	}
// }
// 	
//		return 0;				
//}
//#include <stdio.h>
//int main()
//{
//	int n; 
//    int i,j,t,a[n];    //�������������Ϊ��������
//    printf("������n������\n");
//    for(i=1;i<n+1;i++)
//        scanf("%d",&a[i]);    //�Ӽ���������Ҫ�����n������
//    for(i=1;i<=n;i++)
//        for (j=i+1;j<=n+1;j++)
//            if(a[i]>a[j])    //���ǰһ�����Ⱥ�һ�������������м����tʵ����ֵ����
//            {
//                t=a[i];
//                a[i]=a[j];
//                a[j]=t;
//            }
//	 printf("%d\n",n);
//    printf("������˳���ǣ�\n");
//    for(i=1;i<=10;i++)
//        printf("%5d", a[i]);    //�������������
//    printf("\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//     int i,x,j,t;
//	int *num=NULL;
////	printf("please input intergral n:");
//	scanf("%d",&x);
//	for(i=0;i<x;i++)
//	{
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<x-1;i++)
//		for(j=i+1;j<x;j++)
//	{
//		if(num[i]>num[j])
//		{
//			t=num[j];
//			num[j]=num[i];
//			num[i]=t;
//		}for(i=0;i<x;i++)
////	printf("%d",x);
//	printf("%d",num[i]);
//	}
//	
//	
//	return 0;
//}
//

#include<stdio.h>
int main()
{
int n,a[210],max,i,j,min,sum;
	sccanf("%d",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=1;j<n+1;j++)
	{
		sum+=a[i];
		if(a[i]>a[j])
			max=a[i];
		min=a[j];
	}
	printf("%d \n",sum);
	printf("%d \n",min);
	printf("%d \n",max);
	return 0;
	
	
	
}





