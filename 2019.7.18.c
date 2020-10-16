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
//	int i,n,sum=0;
//	printf("please input n:");
//	scanf("%d",n);
//	for(i=1;i<=n;i++)
//	{
//		sum+=n;
//		
//	}
//	printf("%I64d",sum);
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{   
//	
//	int n,i;
//	printf("please input n:");
//   scanf("%d",&n);
//				 for(i=0;i<n)
//				 {
//                       printf("*");
//					i++; 
//					 
//					 
//					 
//				 }
//				 
//				 for(i=n;i>0;n--)
//				 {
//                  printf("*");
//					 
//					 
//					 
//					 
//				 }
//	
//	return 0;
//	
//}
// 
//#include<stdio.h>
//#include<string.h>
//	int  main()
//{
//    char str1,str2;
//	printf("please input two strings:");
//	scanf("%s%s",&str1,&str2);
//	if(strcmp(str1,str2)==0)
//	{   
//		printf("2");
//	  	
//		
//}
//	else if(strcmp(str1,str2)<0&&strcmp(str1,str2)>0) 
//	{
//	   printf("1");	
//		}
//	else if(strlen(str1)==strlen(str2))
//	{
//		
//		printf("4");	
//		
//	}
//	return 0;
//}
//	
//#include<stdio.h>
//int main()
//{   
////	puts('hello world');gets('hello world');
////printf("nimeidewodetianlahahazenmebana woyaohaoahoade");
//	
//}
//#include<stdio.h>


//		printf("3");
//	if (c = 4)
//		printf("4");
//printf("%d",c);#include<stdlib.h>
//int main()
//{
//	char a[10];
//	char b[10];
//	int i = 0;
//	int c = 0;
//	int len1 = 0, len2 = 0;
//	printf("please input two strings:");
//	gets(a);
//	gets(b);
//	len1 = strlen(a);
//	len2 = strlen(b);
//	if (len1 != len2)
//		printf("1");
//		
//	if (len1==len2)
//	{
//		if (strcmp(a, b) == 0)
//				c = 2;
//		if (strcmp(a, b) != 0 && strcmp(strlwr(a), strlwr(b)) == 0)
//				c = 3;
//		if (strcmp(a, b) != 0)
//				c = 4;
//	}
////	if (c = 2)
////		printf("2");
////	if (c = 3)
//return 0;
//	
//}
//#include <iostream>
//  using namespace std;
//  
//int main(){
//  
//      char str[15] = "abcd";
//     char str1[] = "abc";
//     strcpy(str, str1);
//      cout<<str<<endl;
// 
//     system("pause");
//    return 0;
//     }
//#include<stdio.h>
//int main()
//{
//	int n,i,j,count;
//	int a[25][25];
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		scanf("%d",&a[i][i]);
//	}
//	for(j=0;j<n;j++)
//	
//	{
//		count=0;
//		for(i=0;i<n;i++)
//		{
//			count+=a[i][j];// 统计每一列的测试结果，即每一个芯片经过所有芯片的测试，得到结果统计 
//		}
//		if(count>n/2)
//		{
//		 printf("%d",j+1);
//}
//	return 0;
//}
//}
//#include<stdio.h>
//
//using namespace std;
// 
//const int maxn=30;
//char a[maxn][maxn];
// 
//int main(){
//    int n,m;
//    while(scanf("%d%d",&n,&m)==2){
//        int t=max(n,m);
//        for(int i=0;i<t;i++)
//            for(int j=0;j<t;j++)
//                a[i][j]='A'+abs(j-i);
//        for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++) printf("%c",a[i][j]);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//#include<stdio.h>
// 
//int main()
//{
//	int i,j,n;
//	
//	printf("请输入要打印的菱形行数：");
//	scanf("%d",&n);
//	
//	for(i = 0;i < n;i++){
//		for(j = 0;j < n - i;j++){
//			printf(" ");
//		}
//		for(j = 0;j < 2 * i - 1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i-1;j++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=2*n-2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");//每输入一次星号换行一次 
//	}
//	return 0;
//}
//2.平行四边形
//#include<stdio.h>
// 
//int main()
//{
//	int i,j,n;
//	
//	printf("请输入要打印的平行四边形行数：\n");
//	scanf("%d",&n);
//	
//	for(i = 1;i < n;i++){
//		for(j = 1;j < n - i;j++){
//			printf(" ");
//		}
//		for(j = 1;j < n;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;	
//}
//
//3.顶尖朝上等腰三角形
//#include<stdio.h>
// 
//int main()
//{
//	int n,i,j;
//	
//	printf("请输入要打印的尖朝上的等腰三角行数：");
//	scanf("%d",&n);
//	
//	for(i = 1;i <= n;i++){
//		for(j = 1;j <= n - i;j++){
//			printf(" ");
//		}
//		for(j = 1;j <= 2 * i - 1;j++ ){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.顶尖朝下等腰三角形
//#include<stdio.h>
// 
//int main()
//{
//	int n,i,j;
//	
//	printf("请输入要打印的尖朝下的等腰三角行数：");
//	scanf("%d",&n);
//	
//	for(i = 1;i <= n;i++){
//		for(j = 1;j <= i - 1;j++){
//			printf(" ");
//		}
//		for(j = 1;j <= (2 * n - 2 * i) + 1;j++ ){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//5.空心菱形
//#include<stdio.h>
// 
//int main()
//{
//    int i,j,k,line,m;
// 
//    printf("请输入行数:");
//    scanf("%d",&line);
//    m=(line+1)/2;
//    for(i=1;i<=m;i++)
//    {
//        for(k=0;k<m-i;k++)
//        {
//            printf(" ");
//        }
//        printf("*");
//        if(i==1)
//        {
//            printf("\n");
//            continue;
//        }
//        for(j=0;j<2*i-3;j++)
//        {
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    }
//    for(i=m-1;i>0;i--)
//    {
//        for(k=0;k<m-i;k++)
//        {
//            printf(" ");
//        }
//        printf("*");
//        if(i==1)
//        {
//            printf("\n");
//            continue;
//        }
//        for(j=0;j<2*i-3;j++)
//        {
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    }
//    return 0;
//}
//
//
//6.立体心形

//#include <stdio.h>
//#include <math.h>
// 
//float f(float x, float y, float z) 
//{
//    float a;
// 
//    a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
// 
//float h(float x, float z) 
//{
//    float y;
// 
//    for ( y = 1.0f; y >= 0.0f; y -= 0.001f)
//        if (f(x, y, z) <= 0.0f)
//        {
//            return y;
//        }
//    return 0.0f;
//}
// 
//void main() 
//{    float z,x,v,y0,ny,nx,nz,nd,d;
//
//   for ( z = 1.5f; z > -1.5f; z -= 0.05f)
//    {
//        for ( x = -1.5f; x < 1.5f; x += 0.025f) 
//        {
//             v = f(x, 0.0f, z);
//            if (v <= 0.0f) 
//                   y0 = h(x, z);
//               ny = 0.01f;
//                 nx = h(x + ny, z) - y0;
//                 nz = h(x, z + ny) - y0;
//                 nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//                d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//                putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
//            }
//           else                putchar(' ');
//        }
//        putchar('\n');
//    }
//}
//
#include<stdio.h>
int main()
{
  int n;
	scanf("%d",&n);
	if(n>=1&&n<=34)
	{
        int i,j;
		int a[34][34];
		for(i=0;i<n;i++){
				for(j=1;j<n-1;j++)
				{
                         a[i][i]=1;
					a[i][1]=1;
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				  
				
				}
				
		printf("%d",a[i][j]);
		}
	}			
	return 0;
    
}
