//#include<stdio.h>
//int main()
//{void max_min(int a[],int n); 
//int n,a[20000000],sum=0;
// int i,max,min;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//		sum+=a[i];
//		
//               
//max_min(a, n);
//     printf("%d\n",max);
//	printf("%d\n",min);
//	printf("%d \n",sum);
//	
//	return 0;
//	
//	}
//	void max_min(int a[],int n) 
//{    
//     int i,min;	
//	int max=min=a[0];
//	for(i=0;i<n;i++)
//	{
//		if(max<a[i])
//		{
//			max=a[i];
//		}
//		if(min>a[i])
//		{
//			min=a[i];
//		}
//	}
//	
//}
#include<stdio.h>
//int main()
//{
//	int i,n=0,j,a[i][j];
//	printf(" 请输入一个小于等于34的整数:");
//	scanf("%d",&n);
//	while(n>=1||n<=34)
//	{for(i=1;i<=n;i++)
//        a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
//    for(i=3;i<=n;i++)
//        for(j=2;j<=i-1;j++)
//            a[i][j]=a[i-1][j-1]+a[i-1][j];  /*除两边的数外都等于上两顶数之和*/ 
//   
//            printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
//        for(j=1;j<=i;j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
//            printf("%6d",a[i][j]);
//        
//        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
//
//	}
//		
//	
//	
//	
//    }
//#include <stdio.h>
//#define N 35 
// int main()
//{
//    int i, j, k, n=0, a[N][N];  
//    while(n<=0||n>=34){ 
//        printf("请输入你需要杨辉三角的行数：");
//        scanf("%d",&n);
//    }
//   
//    
//    printf("%d行杨辉三角如下：\n",n);
//    for(i=1;i<=n;i++)
//        a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
//    for(i=3;i<=n;i++)
//        for(j=2;j<=i-1;j++)
//            a[i][j]=a[i-1][j-1]+a[i-1][j];  /*除两边的数外都等于上两顶数之和*/ 
//    for(i=1;i<=n;i++){
//        for(k=1;k<=n-i;k++)
//            printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
//        for(j=1;j<=i;j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
//            printf("%6d",a[i][j]);
//        
//        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
//    }
//    printf("\n");
//    	
//    
//    
//}
//
//#include <stdio.h>
//#define N 34
//int main(int argc, char **argv)
//{
//    int a[N][N];
//    int i,j,n;
//    printf("请输入你需要的杨辉三角的行数："); 
//    scanf("%d",&n);
//    for(i = 0;i < n;i++)
//        for(j = 0;j <= i;j++)
//            a[i][j] = 1;
//    for(i = 2;i < n;i++)
//        for(j = 1;j < i;j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//    for(i = 0;i < n;i++)
//    {
//        for(j = 0;j <= i;j++)
//            printf("%d ",a[i][j]);
//        printf("\n");
//    }
//}
//#include <stdio.h>
//
//#define PI 3.14159265358979323
//
//int main()
//{
//        
//        
//  int a;
//        scanf("%d", &a);
//	   
//        
//        printf("%.7lf\n", a*a* PI);
//
//        return 0;
//}

//#include <stdio.h>
//
//#define PI 3.14159265358979323
//
//int main(int argc, char *argv[])
//{
//        int a;
//        double b;
//
//        scanf("%d", &a);
//        b = a;
//        printf("%.7lf\n", b * b * PI);
//
//        return 0;
//}
//#include<stdio.h>
//int main()
//{int i,n,m,a[1001];scanf("%d",&n);//输入一个整数
// for(i=1;i<=n;i++)//输入一组数据 	
//	 scanf("%d",&a[i]);
//	 scanf("%d",&m);//输入查找的数 
// for(i=1;i<=n+1;i++)//查找 	
// { 
// if(m==a[i])		
// { printf("%d",i);break;		}
// 
//	else if(i==n+1&&a[i]!=m) 
//	{ printf("-1");}
//	}
//	return 0; }
//#include<stdio.h>
//int main()
//{
////	int n;
////	scanf("%d",&n);
//	for(i=1000;i<=10000;i++)// 遍历所有的四位数 
//	{
//		
//		
//	}
//	 
//}
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,i,k=1;
//	for(i=1000;i<10000;i++)
//	{
//a=i/1000;
//		b=i/100%10;
//		c=i/10%10;
//		d=i%10;
//		if(a==d&&b==c)
//		{
//			printf("%d",i);
//			k++;
//			if(k%5==0) 	printf("\n");
//		}
//		
//	}
//		return 0;
//}
//#include <stdio.h>
//
//#include <string.h>
//
// 
//
//int main()
//{
//
//    int n = 0,i = 0,j = 0,len = 0,k = 0;
//
//    char buf[7];
//
// 
//
//    scanf("%d",&n);
//
// 
//
//   //枚举
//    for (i = 1000; i < 10000; ++i)
//
//    {
//
//        sprintf(buf,"%d",i);
//
//       len = strlen(buf);
//
//        for (j = 0; j < len/2; ++j)
//
//        {
//
//            if (buf[j] != buf[len-1-j])//非回文 跳出
//
//            {
//
//                break;
//
//            }
//
//        }
//
//        if (j == len/2)
//
//        {
//
//            len = 0;
//
//            for (k = 0; buf[k] != '\0'; ++k)
//
//                len += (buf[k]-'0');
//
//            if (n == len)//是否相等
//                printf("%d\n",i);
//
//        }
//
//    }
//
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    long int i=10000;
//    int j,num;
//    long int n[6]={0};
//    printf("输入一个正整数：");
//    scanf("%d",&num);
//    while(i<100000)                                 //先计算五位数的符合相加之后为num的所有的数 
//    {   
//        if(i<=99999)
//        {   
//            n[0]=i/10000;
//            n[1]=i%10000/1000;
//            n[2]=i%10000%1000/100;
//            n[3]=i%10000%1000%100/10;
//            n[4]=(i%10000%1000%100%10)%10;
//            if((n[0]==n[4])&&(n[1]==n[3]))
//                if(num==(n[0]+n[1]+n[2]+n[3]+n[4]))
//                    printf("%d\n",i);
//        }
//        i++;
//    }
//    while(i<1000000)                                //接着计算六位数
//        {   
//            n[0]=i/100000;
//            n[1]=i%100000/10000;
//            n[2]=i%100000%10000/1000;
//            n[3]=i%100000%10000%1000/100;
//            n[4]=i%100000%10000%1000%100/10;
//            n[5]=(i%100000%10000%1000%100%10)%10;
//            if((n[0]==n[5])&&(n[1]==n[4])&&(n[2]==n[3]))
//                if(num==(n[0]+n[1]+n[2]+n[3]+n[4]+n[5]))
//                    printf("%ld\n",i);
//            i++;
//        }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long int i=10000;
//	int num;
//	printf("请输入一个数：");// 确定输入的数 
//	scanf("%d",&num); 
//	int n[6]=0;
//	while(i<100000)
//	{
//		n[0]=i/100000;
//		n[1]=i%10000
//	}
//	
//	
//	
//}
//#include<stdio.h>
//int main()
//{int fun(int m,int n);
//	int m,n;
//	printf("请输入m,n");
//	scanf("%d%d",&m,&n);
//	printf("%d\n",fun(m,n));
//	return 0;
//}
//
//int fun(int m,int n)
//{
//	if(m<n)
//		return 0;
//	if(n==0)
//		return 1;
//	return fun(m-1,n)+fun(m,n-1);
//}
#include<stdio.h>
int main()
{int fun(int m,int n);
	int m,n;
	printf("请输入m,n");
	scanf("%d%d",&m,&n);
	printf("%d\n",fun(m,n));
	return 0;
}

int fun(int m,int n)
{
	if(m<n)
		return 0;
	if(n==0)
		return 1;
	return fun(m-1,n)+fun(m,n-1);
}


