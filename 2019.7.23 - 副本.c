#include<stdio.h>  
//#include<string.h>  
//int main()  
//{  
//    char a[100];int i,j,k,l;  
//    char b[20][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
//    char c[20][10]={"","","shi","bai","qian","wan","shi","bai","qian","yi","shi"};  
//    gets(a);  
//    l=strlen(a);  
//    for(i=0;i<l;i++){  
//        j=a[i]-48;      
//        if(j==0){if(i<l-1)if(a[i+1]!=48)printf("%s ",b[j]);}  
//        else   
//        if((l-i==2||l-i==6||l-i==10)&&j==1)printf("%s ",c[l-i]);  
//        else if(a[i-1]==48&&j==1)printf("%s ",c[l-i]);  
//        else printf("%s %s ",b[j],c[l-i]);  
//    }  
//    printf("\n");  
//    return 0;  
//} 

//#include <stdio.h>
//#include <string.h>
//
//int main() 
//{
//	char str1[11],str2[11];
//	scanf("%s\n",str1);
//	scanf("\t%s",str2);
//	if(strlen(str1) != strlen(str2))
//	{
//		printf("1");
//	}
//	else if(!strcmp(str1,str2))
//	{
//		printf("2");
//	}
//	else if(!strcmp(strlwr(str1),strlwr(str2)))
//	{
//		printf("3");
//	}
//	else
//	{
//		printf("4");
//	}	
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	char str[5];
//  for(i=1000;i<10000;i++)
//	{
//		
//   sprintf(str,"%d",i);	
//		for(j=0;str[j];j++)
//			if(str[0]==str[3]&&str[1]=str[2])
//			printf("%d\n",i);
//		
//	}
//		
//		return 0;
//		}
//	   
//	
  	
//#include<stdio.h>
// 
//int main(){
//    int n;
//    scanf("%d",&n);
//    int t;
//    while(n--){
//        scanf("%x",&t);
//        printf("%o\n",t);
//         
//    }
//    return 0;
//}	
//	
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n,i,j,k,a,cur,ok,m,l;
//	char s[10][100001],d16[16][5]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"},out[140000]={},z[13]={};
//	scanf("%d",&n);                      
//	for(j=0;j<n;j++)
//		scanf("%s",s[j]);
//	for(j=0;j<n;j++)
//		{
//			k=0;ok=1;m=0;                            /*初始化标记数据*/ 
//			l=strlen(s[j]);                           /* 初始化标记数据*/ 
//			a=3-l%3;                                   /*初始化标记数据*/ 
//			if(a==3)	ok=0;                    /*十六进制数长度刚好为3的倍数时转二进制不需补0，ok标记其是否为3的倍数0是1不是*/ 
//			for(i=0;i<l;i++)                       /*逐位读取十六进制数进行转换*/ 
//			{
//				if(65<=s[j][i])                          
//					s[j][i]-=7;
//				if(ok)                                     /*十六进制数位数不足转二进制时补0占位*/ 
//					if(a==1){
//						strcat(z,"0000");k=k+4;ok=0;
//					}else if(a==2){
//						strcat(z,"00000000");k=k+8;ok=0;
//					}
//				z[k++]=d16[s[j][i]-48][0];                  /*一位十六进制转四位二进制*/ 
//				z[k++]=d16[s[j][i]-48][1];
//				z[k++]=d16[s[j][i]-48][2];
//				z[k++]=d16[s[j][i]-48][3];
//				if(k==12)                                    /*每转三位十六进制数将其转为四位八进制数*/ 
//				{
//					for(cur=0;cur<12;m++)
//						out[m]=((z[cur++]-48)*4+(z[cur++]-48)*2+(z[cur++]-48)*1)+48;
//					z[0]='\0';k=0;                               /*z[0]='\0'初始化字符串结束符位置避免溢出*/ 
//				}
//			}                                      
//			for(;k<3;k++)                                  /*输出时忽略前导0*/ 
//				if(out[k]!=48)	break;
//			for(;k<m;k++)
//				printf("%c",out[k]);
//			putchar('\n');
//		}
//	return 0;
//}
// 
//#include<stdio.h>
//int main()
//{    int i=1000,a,b,c,d;
// for(i=1000;i<10000;i++)
// {  
//	  a=i/1000;
//	 b=i%1000/100;
//	 
//	 c=i%100/10;
//	d=i%10;
//	 
//	 if(a==d&&b==c)
//	 
//		printf("%d\n",i);
//	 
//		 
//	 
//	 
//	 
//	 
// }
//	
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{  int i=100,a,b,c;
// for(i=100;i<1000;i++)
// {  
//   a=i/100;
//	 b=i%100/10;
//	 c=i%10;
//	 if(i=a*a*a+b*b*b+c*c*c)
//   printf("%d\n",i);
//	 
//	 
//	 
//	 
//	 
// }
//	
//	
//return 0;	
//	
//	
//	
//}

//#include<stdio.h>
//int main()
//{ int usigned h,m;
//printf("please input h and m:");
//scanf("%d%d",&h,&m);
// char a[60]=
//	
//for	
//}


//#include <stdio.h> 
//int main()
//{char num[24][10]={"zero","one","two","three","four","five",
// "six","seven","eight","nine","ten","eleven","twelve","thirteen",
// "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
// "twenty","thirty","forty","fifty"};
// int h,m;
// scanf("%d%d",&h,&m);
// printf("%s",num[h]);
// if(m>0)
//   {if(m<21)printf(" %s",num[m]);
//      else 
//      {printf(" %s",num[m/10+18]);
//       if(m%10>0)printf(" %s",num[m%10]);
//      }
//   }
// else printf(" o'clock");
// printf("\n");
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("please input n:");
//	scanf("%d",&n);
//	char a[30]={'A',"B","C","D","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T",
//	"U","V","W","X","Y","Z"};
//     int i;
////     int *p;
////     p=a;
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	 for(i=0;i<n;i++)
//	 {
//	 	printf("%d",a[i+1]);
//	 	printf("%d",a[i]);
//	 	
//	 }
//
//
//}
//#include <stdio.h> 
//int main()
//{char num[24][10]={"zero","one","two","three","four","five",
// "six","seven","eight","nine","ten","eleven","twelve","thirteen",
// "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
// "twenty","thirty","forty","fifty"};
//  int i,j;
//  scanf("%d%d",&i,&j);
//  for(i=1;i<24;i++)
//
//  for(j=0;j<=10;j++)
//  scanf("%d",&num[i][j]);
//  printf("%d",num[i][j]); 
//  
//  
//}
//
//
//




