//#include <stdio.h>
// 
//int main()
//{
//    int i,j;
//    int count=0;
//    
//    for (i=101; i<=200; i++) 
//    {
//        for (j=2; j<i; j++) 
//        {
//        // ���j�ܱ�i����������ѭ��
//            if (i%j==0) 
//                break;
//        }
//    // �ж�ѭ���Ƿ���ǰ���������j<i˵����2~j֮��,i�п���������
//        if (j>=i) 
//        {
//            count++;
//            printf("%d ",i);
//        // ���У���count������ÿ���������
//            if (count % 5 == 0) 
//            printf("\n");
//        }
//    }    
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	int count=0;
//	for(i=101;i<200;i++)
//	{
//		for(j=2;j<=i;j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(j>=i)
//		{
//			count++;
//		printf("\t%d\t\t",i);
//		
//		if(count%5==0)
//		printf("\n\n\t");
//		}
//		
//		
//	}
//}
//#include<stdio.h>
// 
//enum DAY
//{
//      MON=1, TUE=2, WED, THU, FRI, SAT, SUN
//}day[7];
// 
//int main()
//{    int n=0;
////printf("������������n:"); 
//enum DAY day;
////    scanf("%d",&n);
//day=SUN;
//    
//    
//    printf("%d",day);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	enum day{
//		1=mon,tue,wed,thur,fra,sat,7=sun
//	}day;
//	char day=5;
//	printf("%c",day);
//}
//#include <stdio.h>
// 
//int fibonaci(int i)
//{
//   if(i == 0)
//   {
//      return 0;
//   }
//   if(i == 1)
//   {
//      return 1;
//   }
//   return fibonaci(i-1) + fibonaci(i-2);
//}
// 
//int  main()
//{
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//       printf("%d\t\n", fibonaci(i));//���1~10������ 
//    }
//    return 0;
//}
//#include<stdio.h>
// 
//int main()
//{
//    int i,j;
//    printf("\1\1\n"); /*�������Ц��*/
//    for(i=1;i<11;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf("%c%c",219,219);
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main(void)
//{
//    int i,j;
//    SetConsoleOutputCP(437);
//    char a=176,b=219;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(i==j||(i+j+1)==5)
//                printf("%c",b);
//            else
//                printf("%c%c",a,a);
//        }
//        printf("\n");
//    }
//    } 
//#include<stdio.h>
//
//int main(void)
//{
//    int sum, x, y, z;
//    for(x=1;x<10;x++)
//        for(y=0;y<10;y++)
//            for(z=0;z<10;z++)
//            {
//                sum=100*x+10*y+z;
//                if(sum==x*x*x+y*y*y+z*z*z)//����λ���ֵ�ˮ�ɻ��� 
//                    printf("%4d",sum);
//            }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    int i,temp;
//    double sum;
//    for(i=100;i<1000;i++){
//        sum=0;
//        temp=i;
//        while(temp){//ѭ���ṹ�������е��� 
//            sum+=pow(temp%10,3);//����ѧn�η����� 
//            temp/=10;
//        }
//        if((int)sum==i)
//            printf("%d ",i);
//    }
//    return 0;
//}
//#include<stdio.h>
//int IsSXH(int n)
//{
//    int a,b,c,num;
//    num = n;
//    c = n%10;
//    n = n/10;
//    b = n%10;
//    a = n/10;
//    if(num == a*a*a + b*b*b + c*c*c)
//        return 1;
//    else
//        return 0;
//}
//int main(void)
//{
//    int i;
//    for(i = 100; i < 1000; i++)
//    {
//        if(IsSXH(i))
//            printf("%d\n",i);
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//    int i, s, n, q;
//    for(i = 101; i < 1000; i++)
//    {
//        s = 0;
//        q = i;
//        while(q != 0)
//        {
//            n = q % 10;
//            s += n*n*n;
//            q /= 10;
//        }
//        if( s == i)
//            printf("%d��ˮ�ɻ���\n", i);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,j,result;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			result=i*j;
//            printf("%d*%d=%-3d",i,j,result); /*-3d��ʾ����룬ռ3λ*/
//		}
//		printf("\n");
//		
//	}
// } 
//#include<stdio.h>
//int main()
//{
//	int n,i;
//	printf("please input n:");
//	scanf("%d",&n);
//	for(i=2;i<=n;i++)
//	{
//		while(n%i==0)
//		{printf("%d",i);
//		n/=i;
//	 if(n!=1)	printf("*");
//		
//		}
//		
//	}
//	
//}
//#include<stdio.h>
//int main()
//{  
//int score;
//scanf("%d",&score);
//switch(score)
//{
//	case '90':
//	printf("����\n");break;
//	case '80':printf("B");break;
//	case '70':printf("C");break;
//	case '60':printf("D");break;
//	
//	
//}
//	
//}
#include <stdio.h>
 
int main ()
{
   /* �ֲ��������� */
   char grade = 'A';
 
   switch(grade)
   {
   case 'A' :
      printf("�ܰ���\n" );
      break;
   case 'B' :
   case 'C' :
      printf("���ú�\n" );
      break;
   case 'D' :
      printf("��ͨ����\n" );
      break;
   case 'F' :
      printf("�������һ��\n" );
      break;
   default :
      printf("��Ч�ĳɼ�\n" );
   }
   printf("���ĳɼ��� %c\n", grade );
 
   return 0;
}
