
// ѧ�����ۻ�������  n��ѧ����m���������ۡ�  1��ʾΪ��ߵĻ�   0��ʾ��Ϊ 
// ������ 3 2
//        1 0
//          0 1
//          1 1
// ��� �����෴�Ķ��� 2		 
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(int argc, char *argv[]) {
//	// god���ڴ��ʮ����ֵ��������picturesΪ3�������������Ϊ111����god = 7
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
//			sum += results[i][j] * pow(2, j);// ת��Ϊʮ�������ж�  6-->110 7-->111 
//		}
//		staging[i] = sum;
//	} 
//	for (i = 1; i < pictures; i++) {
//		god += pow(2, i);
//	}
//	// ʹ�����������������ж�����ѧ���Ĵ��Ƿ���ȫ�෴ 
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


// ˮ�ɻ������ĵ�     while ��break�������� if������һ�� 
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
//printf("������һ����λ����\n");
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

	
