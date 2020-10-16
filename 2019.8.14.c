//#include<stdio.h>
//int main()
//{
//char *string="I love china";
//printf("%s\n",string);
//return 0;


//  
//char a[]="I am a student.",b[20];
//int i;
//for(i=0;*(a+i)!='\0';i++)
//
//	*(b+i)=*(a+i);
//	*(b+i)='\0';
//
//for(i=0;b[i]!='\0';i++)
//printf("%c",b[i]);
//return 0;
	
//char a[]="nimeide",b[20];
//int i;
////gets(a);
//for(i=0;a[i]!='\0';i++)
// {    
// 
//     b[i]=a[i];
//  b[i]!='\0';
//}
//
//for(i=0;b[i]!='\0';i++)
//printf("%c",b[i]);	
	
	
//	char a[]="nimeidehaah  I good at cheat";
//	char b[20];
//	strcpy(b,a);
//	printf("%s",b);
//	

//   void copystring(char from[],char to[]);
//   char a[]="I love china",b[20];
//   copystring(a,b);
//   printf("%s",b); 
//	
//	
//	
//	
//}
//void copystring(char from[],char to[])
//{
//int i;
////for(i=0;from[i!='\0'];i++)
////{
////	to[i]=from[i];
//// } 
//while(from[i]!='\0')
//{
//	to[i]=from[i];
//	i++;
////	to[i]='\0';        
//}
//}
#include<stdio.h>
{
	float score[][4]={{20,23,45,44},{56,57,58,59},{66,67,68,69}};
float i,k,*p;
float *search(float (*p)[4],int n);
printf("请输入你的学号："); //输入要查询的学号
scanf("%d",k);
p=search(score,k);
for(i=0;i<4;i++)
printf("%5.2f",*(p+i));
}

*search(float (*p)[4],int n) 
{
	float *pt;
	pt=*(p+n);
	
}
 










