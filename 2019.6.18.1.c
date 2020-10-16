#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*in,*out;
	char ch,infile[10],outfile[10];
	printf("请输入文件名：");
	scanf("%s",infile);
	printf("请输入输出文件名：");
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
 while(!feof(in))  //如果没遇到输入文件的结束标志
 {
 fputc(ch,out); //将ch 写到输出文件 
  putchar(ch);//将ch显示在屏幕上
  ch=fgetc(in);
   
}
putchar(10);   //显示完全后换行 
fclose(in);
fclose(out);
return 0;
}
   
   
   
   
   
   
   
   
   
   
   
   
