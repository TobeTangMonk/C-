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
//        // 如果j能被i整出在跳出循环
//            if (i%j==0) 
//                break;
//        }
//    // 判断循环是否提前跳出，如果j<i说明在2~j之间,i有可整出的数
//        if (j>=i) 
//        {
//            count++;
//            printf("%d ",i);
//        // 换行，用count计数，每五个数换行
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
////printf("请输入星期数n:"); 
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
//       printf("%d\t\n", fibonaci(i));//求出1~10的数列 
//    }
//    return 0;
//}
//#include<stdio.h>
// 
//int main()
//{
//    int i,j;
//    printf("\1\1\n"); /*输出两个笑脸*/
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
//                if(sum==x*x*x+y*y*y+z*z*z)//找三位数字的水仙花数 
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
//        while(temp){//循环结构遍历所有的数 
//            sum+=pow(temp%10,3);//用数学n次方函数 
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
//            printf("%d是水仙花数\n", i);
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
//            printf("%d*%d=%-3d",i,j,result); /*-3d表示左对齐，占3位*/
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
//	printf("厉害\n");break;
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
   /* 局部变量定义 */
   char grade = 'A';
 
   switch(grade)
   {
   case 'A' :
      printf("很棒！\n" );
      break;
   case 'B' :
   case 'C' :
      printf("做得好\n" );
      break;
   case 'D' :
      printf("您通过了\n" );
      break;
   case 'F' :
      printf("最好再试一下\n" );
      break;
   default :
      printf("无效的成绩\n" );
   }
   printf("您的成绩是 %c\n", grade );
 
   return 0;
}
