//#include<stdio.h>
//int main()
//{
//	int h=0,m=0;
//	
//		scanf("%d%d",&h,&m);
//
//	if(m>=0&&m<=19)
//	{
//	m=h;
//	switch(h)
//	{
//		case 0: printf("zero");break;
//		case 1: printf("one");break;
//		case 2: printf("two");break;
//		case 3: printf("three");break;
//		case 4: printf("four");break;
//		case 5: printf("five");break;
//		case 6: printf("six");break;
//		case 7: printf("seven");break;
//		case 8: printf("eight");break;
//		case 9: printf("nine");break;
//		case 10: printf("ten");break;
//		case 11: printf("eleven");break;
//		case 12: printf("twelve");break;
//			case 13: printf("thirteen");break;
//			case 14: printf("fourteen");break;
//			case 15: printf("fiveteen");break;
//			case 16: printf("sixteen");break;
//			case 17: printf("seventeen");break;
//			case 18: printf("eighteen");break;
//				case 19: printf("nineteen");break;
//		}
//	}
//		else if(m>19&&m<60)
//		
//		{h=m%10;
//		switch(h)
//	{
//		case 0: printf("zero");break;
//		case 1: printf("one");break;
//		case 2: printf("two");break;
//		case 3: printf("three");break;
//		case 4: printf("four");break;
//		case 5: printf("five");break;
//		case 6: printf("six");break;
//		case 7: printf("seven");break;
//		case 8: printf("eight");break;
//		case 9: printf("nine");break;
//	}
//		m/=10;
//		 switch(m)
//		{
//			case 2:printf("twenty");break;
//			case 3 :printf("twenty");break;
//				case 4 :printf("twenty");break;
//				case 5 :printf("twenty");break;
//					case 6:printf("twenty");break;
//				
//					
//			}	
//		}
//		
//	}
//	
		
		
//#include <stdio.h> 
//int main()
//{char num[24][10]={"zero","one","two","three","four","five",
// "six","seven","eight","nine","ten","eleven","twelve","thirteen",
// "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
// "twenty","thirty","forty","fifty"};
// int h,m;
// scanf("%d%d",&h,&m);
// 
// if(h>0&&h<21)
// {
// 	printf("%s",num[h]); 
// }
// else if(h>=22&&h<=24)
// {
// 	switch(h){case 21:printf("twentyone");break;
// 		case 22:printf("twentytwo");break;
// 			case 23:printf("twentythree");break;
// 				case 24:printf("twentyfour");break;
//	 }
// 	
// } 
// 
// 
// if(m>=0)
//   {if(m<21)printf(" %s",num[m]);
//      else 
//      {printf(" %s",num[m/10+18]);
//       if(m%10>0)printf(" %s",num[m%10]);
//      }
//   }
// else printf(" o'clock");
// printf("\n");
// return 0;	
//}
//#include<stdio.h>
//int main()
//{
//	printf(" 请输入两个数a,b:");
//	int a,b;
//	scanf("%d\n%d",&a,&b);
//	int a[]
//	
//	
//		}		
		
		
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//char a[100],b[100];
//int c[101],d,e,i,f=0;
//for(i=0;i<101;i++)
//{
//c[i]=0;
//}
//gets(a);
//gets(b);
//d=strlen(a);
//e=strlen(b);
//for(i=0;i<d;i++)
//{
//c[i]=a[d-i-1]-48;
//}
//for(i=0;i<e;i++)
//{
//c[i]+=b[e-i-1]-48;
//if(c[i]>=10)
//{
//c[i]-=10;
//c[i+1]++;
//}
//}
//for(i=0;i<101;i++)
//{
//if(c[i]!=0)
//{
//f=i;
//}
//}
//for(i=f;i>=0;i--)
//printf("%d",c[i]);
//}		
//		

// 一百位数相加的代码 考虑字符与数字的转换问题  
//#include <string.h>
//int i;
//char a[102],b[102];
//int a2[102],b2[102];
//int main() {
//
//    gets(a);
//    //getchar();
//    gets(b);
//    int len1=strlen(a);
//    int len2=strlen(b);
//    for(i=0;i<len1;i++) {
//        a2[i]=a[len1-1-i]-'0';//将a,b,倒叙并且转换为字符 
//    }
//    for( i=0;i<len2;i++) {
//        b2[i]=b[len2-1-i]-'0';
//    }
//    
//    
//    for( i=0;i<(len1>len2?len1:len2);i++) {
//        a2[i]=a2[i]+b2[i];
//        if(a2[i]>9) {
//            a2[i]=a2[i]-10;
//            a2[i+1]++;
//        }
//    }
//    
//    int flag;
//    for( i=100;i>=0;i--) {
//        if(a2[i]) {
//            flag=i;
//            break;
//        }
//    } 
//    for( i=flag;i>=0;i--) {
//        printf("%d",a2[i]);
//    }
//    printf("\n"); 
//    return 0;
//} 
//#include<stdio.h>
//#define max(x,y) ((x)>(y)?(x):(y))
//#define min(x,y) ((x)<(y)?(x):(y))
//int main(){
//    double x1,y1,x2,y2;    //矩形1
//    double x3,y3,x4,y4;    //矩形2
//    double m1,n1;        //交集左上角坐标.
//    double m2,n2;        //交集右下角坐标.
//    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
//    scanf("%lf%lf%lf%lf",&x3,&y3,&x4,&y4);
//    m1 = max(min(x1,x2),min(x3,x4));
//    n1 = max(min(y1,y2),min(y3,y4));
//    m2 = min(max(x1,x2),max(x3,x4));
//    n2 = min(max(y1,y2),max(y3,y4));
//    if(m2>m1 && n2>n1)
//        printf("%.2f\n",(m2 - m1)*(n2 - n1));
//    else
//        printf("0.00\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int max,min,a,b;
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	max=a;min=b;
//	else
//	max=b;min=a;
//	int i,b;
//	for(i=min;i<=max;i++)
//	{
//		for(b=2;b<sqrt(max);b++)
//		{
//			if(max/b)
//			printf("i=%d",i);
//			else 
//			    
//			
//			
//			
//			
//		}
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int a,b,i;
//	int state;//状态
//	int c;
//	scanf("%d%d",&a,&b); 
//	}	
//#include<stdio.h>
//int main(){
//    int a,b,i;
//    int state;//状态 
//    int c;//记录当前的值 
//    scanf("%d%d",&a,&b);
//    if(a>=2&&a<1000&&b>=2&&b<1000)
//    {
//    	
//    	for(i=a;i<=b;i++){
//        state=1;  // judge the number is prime or not 
//        int j;
//        for(j=2;j<i;j++)
//            if(i%j==0)   //若非质数让state为0  												
//            {   
//                state=0;  
//                break;  
//            } 
//		   
//        if(state==1){//若为质数 
//            printf("%d=%d\n",i,i);
//        }else if(state==0){
//            printf("%d=",i);
//            int j=2;
//            c=i;
//            while(1){
//                while(c%j==0){
//                    printf("%d",j);// 循环找质素 
//                    c=c/j;
//                     if(c!=1)     //remenmber that a cant't be equal to b 
//                         printf("*");
//                }
//                 if(c==1){
//                    printf("\n");
//                    break;
//                }
//                j++;
//            }
//        }
//    }
//    }
//    
//}

//#include<stdio.h>
//int sum=0;
//int p(int n,int x,int y,int m[][8],int s)
//{
//    int i,j;
//    for(i=x-1;i>=0;i--)
//    {
//        if(m[i][y]==s)
//	   return 0;
//    }
//    for(i=x-1,j=y-1;i>=0&&j>=0;i--,j--)
//    {
//        if(m[i][j]==s)
//	   return 0;
//    }
//    for(i=x-1,j=y+1;i>=0&&j<n;i--,j++)
//    {
//        if(m[i][j]==s)
//	   return 0;
//    }
//    return 1;
//}
//int h(int n,int x,int m[][8],int s)
//{
//    int i;
//    if(x==n)
//    {
//        if(s==2)h(n,0,m,3);
//        else sum++;
//        return 0;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(m[x][i]!=1)continue;
//        if(p(n,x,i,m,s))m[x][i]=s;
//        else continue;
//        h(n,x+1,m,s);
//        m[x][i]=1;
//    }
//    return 0;
//}
//int main()
//{
//    int n,m[8][8],i,j;
//     scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&m[i][j]);
//        }
//    }
//    h(n,0,m,2);
//    printf("%d",sum);
//     return 0;
//}
//
// 



//#include <stdio.h>
//#define N 200000
// 
//int main()
//{
//    char* sinA = "sin(%d%s%s)";
//    char* Sa = "%s+%d";
//    char* S = "(%s)%s";
//    char An[N] = "sin(1%s%s)", An2[N], An3[N], Sn[N] = "sin(1)+%d", Sn2[N];
//    int i, j, n;
//    scanf("%d", &n);
//    sprintf(Sn2, Sn, n);
//    strcpy(Sn, Sn2);
//    for (i = 2; i <= n; i++)
//    {
//        sprintf(An2, An, i % 2 == 0 ? "-" : "+", sinA);
//        strcpy(An, An2);
//        sprintf(An2, An, i, "%s", "%s");
//        strcpy(An, An2);
//        sprintf(An2, Sa, An, n - i + 1);
//        sprintf(An3, An2, "", "");
//        sprintf(Sn2, S, Sn, An3);
//        strcpy(Sn, Sn2);
//        sprintf(Sn2, Sn, n - i+ 1);
//        strcpy(Sn, Sn2);
//    }
//    printf("%s", Sn);
//    return 0;
//}



#include<stdio.h>
#include<math.h>
int C(int k, int n)
{
    if(k==0 || k==n)
    {
        return 1;
    }

    return C(k,n-1)+C(k-1,n-1);
}

int main()
{
    int k=0,n=0;
    scanf("%d%d",&k,&n);
    printf("%d",C(k,n));
    return 0;
}



//#include<stdio.h>
//
//int main()
//{  int ij;
////while(i<N)
////{
////	printf("*")
////}
//int N;
//scanf("%d",&N);
//int i,j;
////for(i=1;i<=N;i++)
////{
////	for(j=N;j>=i;j--)
////	{
////		printf("*");
////		
////	}
////	printf("\n");
////}
//while(i<N)
//{
//	for(i<)
//}
//}
//

//#include<stdio.h>
//int C(int k,int n)
//	
//{
//	if(k==0||k==n)
//	{
//	return 1;    
//	}
//	
//  return C(k-1,n-1)+C(k,n-1);	
//	
//}
//	
//	
//	
//	
//int main()
//{
//	int k=0,n=0;
//	scanf("%d%d",&k,&n);
//	printf("%d",C(k,n));
//	
//}
	
