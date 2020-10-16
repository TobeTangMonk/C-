/*#include<stdio.h>
int main()
{
	int swap(int *p1,int *p2,int *p3);
	printf(" input three intergers:");//请输入三个整数
	int a,b,c,*p1,*p2,*p3;
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	swap(a,b,c);
	printf("the oder is :%d,%d,%d\n",a,b,c);
	return 0; 
	
}
int swap(int *p1,int *p2,int *p3)
{
	int swap(int *p1,int *p2);
	
	if(*p1<*p2) swap(p1,p2);
	if(*p2<*p3) swap(p2,p3);
	if(*p3<*p1) swap(p3,p1);
	
}
int  swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	
	
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{ void swap(char *,char *);
char str1[30],str2[30],str3[30];
printf("请输入三个字符串：");
gets(str1); 
gets(str2); 
gets(str3); 	
   if(strmp(str1,str2)>0) swap(str1,str2);
   if(strmp(str2,str3)>0) swap(str2,str3);
    if(strmp(str1,str3)>0) swap(str1,str3);
}
void swap(char *p1,char *p2)
{  char p[30];
strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
	
}*/
/*#include<stdio.h>
int main()
{
   void input(int *);
   void deal(int *);
    void output(int *);
   int number[10];
   void input(number);
   void deal(number);
    void output(number);
    return 0;
}
void input(int *number)
{ int i;
   printf("input 10 numbers:");
   for (i=0;i<10;i++)
     scanf("%d",&number[i]);
	
}
void deal(int *number)
{ int *max,*min,*p,temp;//用指针要定义指针变量 
     max=min=number;     //用来交换值 
   for (p=number+1;p<number+10;p++)//走过所有的数 
     if (*p>*max) max=p;              
     else if (*p<*min) min=p;           
   temp=number[0];number[0]=*min;*min=temp;  
   if(max==number) max=min;
   temp=number[9];number[9]=*max;*max=temp; 
           
	
}
void output(int *number)
{
	int *p;
   printf("Now,they are:    ");
   for (p=number;p<number+10;p++)
      printf("%d ",*p);
   printf("\n");
}*/
/*#include<stdio.h>

int main()
{
	printf("input the person is:");
int *p,*p_end;
int i=0;
for(p=0;p<p_end;p++)
{
	while(i%3=0)
	
	

	
}*/
#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
int main()
{
	char *name[]={"follow me","fuck","nimeide","haha","enen"};
	char **p;
	int i;
	for(i=0;i<=5;i++)
	{
		p=name+i;
		printf("%s\n",**p);
	}
	return 0;
}
