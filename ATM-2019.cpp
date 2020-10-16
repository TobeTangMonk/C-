#incldue<stdio.h>
/* 
#include<stdlib.h>
#include<conio.h>
#include<string.h>
*/
struct person
{
	char name[20];
	char cipher[20];
	int account;
	int money;
 }user[1000];
 int count=0;
 int index;
 void resister();//函数声明
 /*void login();
 void quit();*/
 int main()
 {
 	char num;          //设置变量num选择项，i进度,t点数；
					   //int i, t = 1;
					   //for (i = 1; i <= 100; i++)     //让进度从一加到一百
					   //{
					   //	printf("\n\n\n\t\t\t\t\t\t\t△欢迎使用ATM系统！▽\n\n");
					   //	printf("\t\t\t\t\t\t\t○正在登录请稍后");
					   //	for (int j = 1; j <= t; j++)    //让点逐个增加
					   //	{
					   //		printf(".");
					   //	}
					   //	t++;    //重置小数点
					   //	if (t == 11)     //当点数达到11时，让它变为1，重新增加。
					   //		t = 1;
					   //	printf("\n\n\t\t\t\t\t\t\t\t%d%%", i);      //输出进度。
					   //	system("cls");    //清屏
					   //}
	while (1)
	{
		/*system("cls");*/
		printf("\n\n");
		printf("\t\t\t\t\t\t\t**************\n\n");
		printf("\t\t\t\t\t\t\t   ︻︻︻︻\n");      //设置主页面
		printf("\t\t\t\t\t\t\t★〖主界面〗★\n");
		printf("\t\t\t\t\t\t\t   ︼︼︼︼\n\n\n");
		printf("\t\t\t\t\t\t      ◎    【A】用户注册\n");
		printf("\t\t\t\t\t\t      ◎    【B】用户登录\n");
		printf("\t\t\t\t\t\t      ◎    【C】退出系统\n\n\n");
		printf("\t\t\t\t\t\t\t◆请选择执行内容：");
		scanf("%c", &num);     //输入选择的选项
		getchar();    //读取键盘缓冲区的回车符
	
		if (num == 'a' || num == 'A')       //选择用户注册页面
			resister();   //调用注册页面函数
			return 0;
		}
 	
 }
  
