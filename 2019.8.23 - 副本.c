#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ch; 
//
//char ch;// 主界面字符 
//char cha;  // 欢迎界面字符 
// int x=0;
//
// 
// struct 
// {    int judge;  // 判断字符 
// 	char password[30];
// 	char name[20];
// 	int num[30];
// 	double money,          
//  }s[100000],*p=s,*m=s;
//   
int main()
{   int i;
    for(i=0;i<=100;i++)
    {
    	printf("\n\t\t\t欢迎进入青软实训系统"); 
	printf("\n\t\t\t请稍等"); 
	int j,t=1;
     for(j=1;j<t;j++)
     {
     	printf(".");
	}
	t++;
	if(t==5)
	t=1;

printf("\n\n\t\t\t        ");
		printf("○\n\t\t\t      ");
		
	switch (i / 10) {
		case 0:printf("<-■->"); printf("  ■□□□□□□□□□\n\t\t\t\t||"); break;
		case 1:printf("--■--"); printf("  ■■□□□□□□□□\n\t\t\t\t∥"); break;
		case 2:printf("++■++"); printf("  ■■■□□□□□□□\n\t\t\t\tII"); break;
		case 3:printf("←■→"); printf("  ■■■■□□□□□□\n\t\t\t\t∩"); break;
		case 4:printf("<-■->"); printf("  ■■■■■□□□□□\n\t\t\t\t||"); break;
		case 5:printf("--■--"); printf("  ■■■■■■□□□□\n\t\t\t\t∥"); break;
		case 6:printf("++■++"); printf("  ■■■■■■■□□□\n\t\t\t\tII"); break;
		case 7:printf("←■→"); printf("  ■■■■■■■■□□\n\t\t\t\t∩"); break;
		case 8:printf("--■--"); printf("  ■■■■■■■■■□\n\t\t\t\t∥"); break;
		case 9:printf("<-■->"); printf("  ■■■■■■■■■■\n\t\t\t\t||"); break;
		default:break;
		}
		
		printf("\t\t\t     %d%%", i);
		if (i > 95)
			printf("\n\n\t\t\t\t\t  加载完成！");
			int k;		//完成前一瞬间显示加载完成
			
		for ( k = 1; k < 50000000; k++);				//减缓抖屏
		system("cls");		//清屏
    }
  
  
  void wait()
  {
//  	printf("\n\t\t\t请选择你的服务：");
//	printf("\n\t\t\tA:用户登录");
//	 printf("\n\t\t\tB:请选择你的服务：");
//	 printf("\n\t\t\tC:储");
//	  printf("\n\t\t\tD:退出");
	 int i = 1;	                    	//判断是否是第一次输入字符，
	while (1) {
		printf("\n\n\t\t\t您可以选择以下的服务：\n\n");
		printf("\t\t\t\t\t【A】:用户注册\n\n");
		printf("\t\t\t\t\t【B】:用户登录\n\n");
		printf("\t\t\t\t\t【C】:退出系统\n\n");
		if (i == 1) {
			printf("\n\n\t\t\t请输入您想要的服务：");
			ch = getchar();
		}
		
		
		
		if (ch == 'a' || ch == 'A' || ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C')	//判断是否为正常字符
			break;
		if (i != 1)		//不是第一次输入字符，即提示错误
			printf("\n\n\t\t\t您输入的字符错误，请重新输入：");
			
		ch = getchar();		//重新输入字符
		system("cls");		//清屏
		i++;				//字符错误，i自增
	}
	system("cls");			//清屏
}
  	
    }  
     

 
