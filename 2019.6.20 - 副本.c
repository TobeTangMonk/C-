/*#include<stdio.h>
int main()
{
	int  max4(int a,int b,int c,int d);//声明函数 
	printf("请输入四个整数：");
	int a,b,c,d,max;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	 max=max4(a,b,c,d);
	 printf("max=%d",max);
	 return 0;
 } 
 int  max4(int a,int b,int c,int d)
 {    
 	int max2(int a,int b);
 	   
 	int m; //定义一个m来等于其中较大的一个数 
 	m=max2(a,b);
 	m=max2(m,c);
 	m=max2(m,d);
 	return (m);
 	
 	
 }
 int  max2(int a,int b)
 {
 	
 	if(a>=b)
 	return a;
 	else
 	return b;
 }*/ 
 /*#include<stdio.h>
 int main()
 {
 
 	int max4(int a,int b,int c,int d);
 	
	 
 	int max,a,b,c,d;
 	printf("请输入四个数：");
	 scanf("%d%d%d%d",&a,&b,&c,&d);
	  max=max4(a,b,c,d);
 		printf("max=%d",max);
 		return 0; 
 }
 int max4(int a,int b,int c,int d)
 {
 	int max2(int a,int b);// 声明max2函数
 	return max2(max2(max2(max2(a,b),c),d);
 }
 int max2(int a,int b)
 {
 	return (a>=b?a:b);
 }*/

/* #include<stdio.h>
 int main()
 {
 	int age(int n);//对age函数声明
	 printf("NO.5,age:%d\n",age(5));
	 return 0; 
 }
 int age(int n)
 {
 	int c;
 	if(n==1)                     函数的递归调用 
 	c=10;
 	else
 	c=age(n-1)+2;
 	return(c);//返回年龄 
 } */
 
 /*#include<stdio.h>
 int main()
 {
 	int fac(int n);
 	int n;
 	int y;
 	printf("input an integer number:");
 	scanf("%d",&n);
 	y=fac(n);
 	printf("%d!=%d\n",n,y);
 	return 0;
  } 
  int fac(int n)
  {
  	int f;
  	if(n<0)  // n 不可以小于0 
  	printf("n<0,data error!");
  	else if(n==0||n==1) // 特殊情况 
  	f=1;
  	else  f=fac(n-1)*n;
  	return(f);//重点return(f) 之间没有空格键 
  }
 
 */
/* #include<stdio.h>
 int main()
 {
 	float add(float x,float y);
 	float a,b,c;
 	printf("please enter a and b:");
 	scanf("%f%f",&a,&b);
 	c=add(a,b);
 	printf("c=%f5",c);
 	
 }
 float add(float x,float y)
 {
 	float z;
	 z=x+y;
	 return(z); 
 }*/
/* #include<stdio.h>
 int main()
 {
 	void printstar();// 声明printstar函数
	 void printmessage();//声明printmessage函数
	 return 0; 
 }
 void printstar()
 {
 	printf("*************\n");
 }
 void printmessage()
 {
 	printf("How do you do!\n");
 }
 
 */
 /*#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[3][20];
 	char string[20];
 	int i;
 	for(i=0;i<3;i++)
 	gets(str[i]);
 	if(strcmp(str[0],str[1]>0))
 	strcpy(string,str[0]);
 	else
 	strcpy(string,str[1]);
 	if(strcmp(str[2],string)>0)
 	strcpy(string,str[2]);
 	printf("\nthe largest string is:\n%s\n",string);
 	return 0;
 	
 }*/
 
 /*#include<stdio.h>
 int main()
 {
 	char string[81];
 	int i,num=0,word=0;
 	char c; //用作字符串的判断 
 	gets(string);
 	for(i=0;(c=string[i])!='\0';i++)
 	if(c==' ') word=0;
 	else if(word==0)
	 {  word=1;
	 num++;
	  
 	
	 }
	 printf("There are %d words in this line:\n",num);
 }
 
 */
 /*
#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}}
	int b[3][2];
     int  i,j;
      int b; 
	
	printf("array a:\n");
	for(i=0;i<=1;i++)     //处理a 数组中一行中各元素 
	{
		for(j=0;j<=2;j++)// 处理a数组中歌列元素
		{
		printf("%5d",a[i][j]);
		b[j][i]=a[i][j]; 
		
	}
printf("\n");
}
		
	for(i=0;i<=2;i++)
	{
	
	for(j=0;j<=1;j++)
               printf("%5d",b[i][j]);
			
			printf("\n");}
			return 0;
}
 
 #include<stdio.h>
 int main()
 {
 	int a[10];
 	int i,j,t;
 	printf(" input 10 numbers:\n");
 	for(i=0;i<10;i++)
 	scanf("%d",&a[i]);
 	printf("\n");
 	
 	for(j=0;j<9;j++)// 进行就此循环，实现9趟比较 
 	for(i=0;i<9-j;i++) //每一趟比较进行9-j次比较 
 	if(a[i]>a[i+1])//相邻两数比较 
 	{
 		t=a[i];
 		a[i]=a[i+1];
 		a[i+1]=t;
 	}
 		printf("the sorted numbers:\n");
 		for(i=0;i<10;i++)
 		 printf("%d",a[i]);
 		 printf("\n");
 		 return 0;
	 }
 
 */ 
 
 
 /*#include<stdio.h>
 int main()
 {
 	int i;
 	int f[20]={1,1};
 	for(i=2;i<20;i++)
 	f[i]=f[i-2]+f[i-1];
	 for(i=0;i<20;i++)
	 {
	 
//	 if(i%5==0) printf("\n");
	 printf("%12d",f[i]);
	  
	  }
	   printf("\n");
	   return 0;
}
 */
 #include<stdio.h>
 int main()
 {
 	int i;
 	int a[10]={1,23,345,53,34,34,222,333,33};
 	
 	for(i=0;i<=9;i++)
 	
 	printf("%d",a[i]);
 	if(i%1==0) 	printf("\n");
 	for(i=9;i>=0;i--)
 	printf("%d",a[i]);
 	return 0;
 }
 
 
