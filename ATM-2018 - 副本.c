#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
//函数声明

void regist();
void quit();
void login();

//主函数入口
int main()
{
	//记录小数点个数 
	int t=10;
	int i=1;
	for(i=1;i<100;i++)
	{
		//输入提示信息
		printf("\n\n\n\n\t\t\t**********");
		printf("\n\t\t\t\欢迎使用青软实训ATM系统"); 
          printf("\n\t\t\t青软实训ATM为你服务");
		printf("\n正在进入主界面，请稍等");  
		  	}
		  	int j=1;
	for(j=1;j<=t;j++)
	printf(".");
	t++;
	if(t==11)
	t=1;
	printf("\n%d%%",i);
	//添加for循环减慢屏幕闪动频率
	 
 } 
