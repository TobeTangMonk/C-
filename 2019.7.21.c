
// 学生评价画的问题  n个学生对m幅画的评价、  1表示为梵高的画   0表示不为 
// 如输入 3 2
//        1 0
//          0 1
//          1 1
// 输出 评价相反的对数 2		 
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(int argc, char *argv[]) {
//	// god用于存放十进制值，即假设pictures为3，二进制情况下为111，则god = 7
//	int students, pictures, i, j, z, count = 0, god = 1;
//	printf("please input students number and pictures numbers:\n");
//	printf("please input their views about the pictures:\n"); 
//	scanf("%d %d", &students, &pictures);
//	int results[students][pictures];
//	int staging[students];
//	for (i = 0; i < students; i++) {
//		for (j = 0; j < pictures; j++) {
//			scanf("%d", &results[i][j]);
//		}
//	}
//	for (i = 0; i < students; i++) {
//		long long sum = 0;
//		for (j = 0; j < pictures; j++) {
//			sum += results[i][j] * pow(2, j);// 转换为十进制来判断  6-->110 7-->111 
//		}
//		staging[i] = sum;
//	} 
//	for (i = 1; i < pictures; i++) {
//		god += pow(2, i);
//	}
//	// 使用异或运算和与运算判断两个学生的答案是否完全相反 
//	for (i = 0; i < students - 1; i++) {
//		for (j = i + 1; j < students; j++) {
//			int sum1 = -1;
//			sum1 = staging[i] ^ staging[j] & god;
//			if (sum1 == god) {
//				count++;
//			}
//
//		}
//	}
//	printf("%d\t", count);
//	return 0;
//}


// 水仙花数的心得     while 和break可以连用 if不可以一起 
//#include<stdio.h>
//int main()
//{ int sum=0;
//  int a,b,c,n;
//	printf("please input n");
//	scanf("%d",&n);
//	
//	if(n>=100&&n<=1000)
//	{
//	   int a=n/100;
//		    b=n%100/10;
//		c=n%10;
//		sum=a*a*a+b*b*b+c*c*c;
//		if(sum!=n)
//			printf("no");
//		else if(sum==n)
//		   printf("yes");
//		
//		
//	}
//	else 
//	printf("no");
//		
//			
//}
//#include<stdio.h>
//int main()
//{ int sum=0;
//  int a,b,c,n;
//	printf("please input n");
//	scanf("%d",&n);
//	
//	if(n>=100 && n<=1000)
//	{
//	   int a=n/100;
//		    b=n%100/10;
//		c=n%10;
//		sum=a*a*a+b*b*b+c*c*c;
//		if(sum!=n)
//			printf("NO");
//		else if(sum==n)
//		   printf("YES");
//		
//		
//	}
//	else 
//	printf("NO");
//		
//			
//}
//#include<stdio.h>
//int main()
//{ int sum=0;
//  int a,b,c,n;
//	printf("please input n");
//	scanf("%d",&n);
//	
//	if(n>=100 && n<=1000)
//	{
//	   int a=n/100;
//		    b=n%100/10;
//		c=n%10;
//		sum=a*a*a+b*b*b+c*c*c;
//		if(sum!=n)
//			printf("NO");
//		else if(sum==n)
//		   printf("YES");
//		
//		
//	}
//	else 
//	printf("NO");
//		
//			
//}
//#include<stdio.h>
//void main()
//{
//int i,j,k,n;
//printf("请输入一个三位整数\n");
//scanf("%d",&n);
//if(n>=100 && n<=1000)
//{
//	i=n/100; 
//j=n/10%10;
//k=n%10; 
//if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
//{
//printf("YES");
//}
//else
//{
//printf("NO");
//}
//printf("\n");
//}
//else printf("NO");
//}
#include<stdio.h>
int main()
{
	 int a,b,c,i;
	
	for(i=100;i<1000;i++)
	{
		int a=i/100;
		int b=i%100/10;
		int c=i%10;
      
		
	 if(a*a*a+b*b*b+c*c*c==i)
		 printf("%d\n",i);
	}
  	
	
	
}

	
