#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("请输入所用的文件名：");
	scanf("%S",filename);
	getchar();
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("can not open file\n");
		exit(0);
	}

printf("请输入一个准备储存到键盘的字符（以#结束）");
ch=getchar;//接受从键盘输入的第一个字符
while(ch!='#')
{
	fputc(ch,fp);
	putchar(ch);
	ch=getchar();
 } 
 fclose(fp);
 putchar(10);
 return 0;
}
