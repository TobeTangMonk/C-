/*#include<stdio.h>
int d=1;
void fun(int p)
{
	int d=5;
	d+=p++;
	printf("%d",d);
 } 
 main()
 {
 	int a=3;
 	fun(a);
 	d+=a++;
 	printf("%d\n",d);
 }
 */
 /*#include<stdio.h>
 int d=1;
 int fun(int p)
 {
 static int d=5;
 d+=p;
 printf("%d",d);
 return d;
}
main()
{
	int a=3;
	printf("%d\n",fun(a+fun(d)));
	
}
*/
/*#include<stdio.h>

	int fun()
{

	
	int i=0,sum;
	for(i=6;i<=200;i+=10)
	{
		if(i%3=0)
		{
			sum++;
			printf("%d",i);
		}
		
	}
	printf("\n");
	return sum;
}
int main()
{
	int fun();
	printf("%d���200����β��Ϊ6�Ҳ���3����������",fun());
}
*/
/*#include<stdio.h>
int main()
{
	int Sstudents[50]={0};
	int i,score[50][3];
	printf("input students numbers:");
	scanf("%d",&i);
	for(i=0;i<=50;i++)
	{
		printf("please input students scores by chinese math english:%d",i+1);
		int j=0;
		for(j=0;j<3;j++)
		scanf("%d",&score[i][j]);
		
}
   
	int Schinese=0,Smath=0,Senglish=0;
	for(i=0;i<=50;i++)
	{
		Sstudents[i]=score[i][0]+score[i][1]+score[2];
		Schinese+=score[i][0];
		Smath+=score[i][1];
		Senglish=score[i][2];
	}
	printf("��������ܳɼ�%5d,�������ƽ���ɼ�%f",Schinese,Schinese/50);
	printf("�����ѧ�ܳɼ�%5d,�����ѧƽ���ɼ�%f",Schinese,Schinese/50);
	printf("���Ӣ���ܳɼ�%5d,���Ӣ��ƽ���ɼ�%f",Schinese,Schinese/50);
 
 for(i=0;i<=50;i++)
 {
 	printf("ѧ����%d��ƽ���ɼ���%f",i+1,Sstudents[i]/3);
 	printf(",�ܳɼ���%5.2f\n",Sstudents[i]);
  } 
  return 0;
 }
  */
/* #include<stdio.h>
  int mian()
  {
  	int i,score[10],ave,sum;
  	printf("input 10 students scores:");
  	for(i=1;i<=10;i++)
  	scanf("%d",&score[i]);
  	sum+=score[i];
  	ave=sum/10;
  	printf("%d",sum);
  	printf("%f",ave);
  	return 0;
}
*/
/*#include<stdio.h>
void main()
{
	int a[10];
	int i;
	int max,min,sum=0;
	float ave;
	printf("input 10 students scores:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/10;
	max=min=a[0];
	for(i=0;i<10;i++)
	{
		if(max>a[i])
		max=a[i];
		if(min<a[i])
		min=a[i]; 
	 } 
	 printf("max=%d,min=%d,ave=%5.2f\n",max,min,ave);
}
*/
/*#include<stdio.h>
int main()
{
	int score[10],sum=0;
	int i;
	printf("input 10 students scores:");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&score[i]);
		sum+=score[i];
		}
	printf("%d",sum);
	return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[20];
	printf("please input two strings:");
 	scanf("%s,%s",str1,str2); 
     int n;
	printf("����������λ��n:");
	scanf("%d",&n);
	int i,j;
	int str2_len;
	str2_len=strlen(str2);
	str1[strlen(str1)+strlen(str2)]='\0';
	for(i=strlen(str1)-1;i>=n;i--)
	{
		str1[i+str2_len]=str1[i];
	  }  
	  for(j=0;j<str2_len;j++)
	  {
	  	str1[n+j]=str2[j];
	  }
	  printf("%s,%s",str1,str2);
	  return 0;
   
   
   }
   */
   
   /*#include<string.h>
   void main()
   {
   	char str[]="computer";
   	int i=0;
   	
   		while(str[i] && i<strlen(str))
   		{
		   printf("%c",str[i]);
   	             i++;
   		
		   }
   		
} 
*/
#include<stdio.h>
int mian()
{
	char str[50];
	int i,num=0;
	printf("please input a string");
	gets(str);
	for(i=0;i<=40;i++)
	scanf("%c",str[i]);
	while(str[i]>='0' && str[i]<='9')
	{
		num++;
		i++;
	}
	printf("���ʮ�����ַ��ĸ�����%d",num);
	return 0;
}

