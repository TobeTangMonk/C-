#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*in,*out;
	char ch,infile[10],outfile[10];
	printf("�������ļ�����");
	scanf("%s",infile);
	printf("����������ļ�����");
	scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("can not open file\n");
		exit(0);
	 } 
	 if((out=fopen(outfile,"w"))=NULL)
	 {
	 	printf("can not open file\n");
	 	exit(0);
	 }
 } 
 ch=fgetc(in);
 while(!feof(in))  //���û���������ļ��Ľ�����־
 {
 fputc(ch,out); //��ch д������ļ� 
  putchar(ch);//��ch��ʾ����Ļ��
  ch=fgetc(in);
   
}
putchar(10);   //��ʾ��ȫ���� 
fclose(in);
fclose(out);
return 0;
}
   
   
   
   
   
   
   
   
   
   
   
   
