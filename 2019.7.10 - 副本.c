////#include<stdio.h>
////int main()
////{
////	int x,y;
////	scanf("%d",&x);
////	if(x>=0) 
////	if(x>0)
////	          
////	else y=0;
////	else y=1;
////	else y=-1;
////	printf("x=%d,y=%d\n");
//// } 
////#include<stdio.h>
////int main()
////{
////	void action1(int,int),action2(int,int);
////	char ch;
////	int a=15,b=23;
////	printf("please input a or b:");
////	ch=getchar();
////	switch(ch)
////	{
////		case 'a':
////		case 'A':action1(a,b);break;// 调用action1函数执行a操作
////		case 'b':
////		case 'B':action2(a,b);break; 
////		
////			default:putchar('\a');
////		return 0;
////	}
//// } 
//// void action1(int x,int y)
//// {
//// 	printf("x+y=%d\n",x+y);
//// }
//// void action2(int x,  int y)
//// {
//// 	printf("x*y=%d\n",x*y);
//// }
//// #include<stdio.h>
//// int main()
//// {
//// 	void action(int,int),action1(int,int);
//// 	char ch;
//// 	int a=13,b=23;
//// 	printf("please input a or b:");
//// 	ch=getchar();
////	 
//// 	switch(ch)
//// 	{
//// 		case 'a':
//// 		case 'A':action(a,b);break;
//// 		case 'b':
//// 		case 'B':action1(a,b);break;
//// 		
//// 		default :putchar('\a');
//// 	}
//// 	return 0;
////	 }
//// 	
////   
////  void action(int x,int y)
////  {
////  	printf("x*y=%d\n:",x*y);
////  }
////  void action1(int x,int y)
////  {
////  	printf("x+y=%d\n:",x+y);
////  }
////#include<stdio.h>
////int main()
////{
////	int year,leap;
////	printf("enter year:");
////	scanf("%d",year);
////	if(year%4==0)
////	{
////		if(year%100==0)
////		{
////			if(year%400==0)
////			leap=1;
////			else 
////			leap=0; 
////		}
////	
////	}
////		else 
////		leap=1;
//// }
//// else 
//// leap=0;
//// if(leap)
//// printf("%d is",year);
//// else
////  printf("%d is not ",year);
//// printf("a leap year.\n");
////#include<stdio.h>
////int main()
////{
////	float x,y;
////	printf("please input x:");
////	scanf("%f",&x);// x前面的符号 
////	if(x<1)
////	y=x;
////	if(x<10 && x>=1)
////	y=2*x-1;
////	else
////	y=3*x-11;
////	printf("y=%6.2f",y);
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int x,y;
////	printf("enter x:");
////	scanf("%d",&x);
////	y=0;
////	if(x>=0)
////	if(x>0)
////	y=1;
////	else 
////	y=-1;
//// printf("x=%d,y=%d\t\t\t\t\t\t\t",x,y);
//// } 
//#include<stdio.h>
//#include<string.h>
//int x=0;
//struct
//{
//	char num[20];
//	char name[10];
//	char password[2][20];
//	int judge[1000]; // 判断该账号是否被注册 
//	
//} *p;
//
//int main()
//{
//	printf("\n\n\t\t\t Welcome to 青软实训主界面：");
//	printf("\n\n\t\t\t【A】：用户注册"); 
//	printf("\n\n\t\t\t【B】：用户登录");
//	printf("\n\n\t\t\t【C】：退出系统");
//	
//	printf("\n\n\t\t\t请输入你的服务类型：");
//	void regist();
//	void login();  
//	void exit();
//	char ch;
//	ch=getchar();
//	printf("\n\n\t\t\t请输入你的服务类型：");  // 获取选择类型 
//	switch(ch)
//	{
//		case 'a':
//		case 'A':  regist();break;
//		case 'b':
//		case 'B':   login();break;
//		case 'c':
//		case 'C':   exit();break;
//		default:
//			printf("你的输入有误：");
////				system("cls");	
//	 }
//	  
//}
//void regist()// 函数注册
//{	
//   char password[2][10];		//储存密码与确定密码
//		printf("\n\n\t\t\t\t◎ 新用户注册界面 ◎");
//		printf("\n\n\n\n\t\t\t\t请输入你的姓名   ：");
//		scanf("%s", (p + x)->name);
//		getchar();
//		
//		printf("\n\n\n\n\t\t\t\t请输入你的账号  ：");
//			scanf("%s",(p+x)->num); 
//				//输入自己的名字
//		printf("\n\n\t\t\t\t请输入您的6位密码：");
//		scanf("%d",&password[0]);	
//		printf("\n\n\t\t\t\t请再次输入您的6位密码：");
//		scanf("%d",&password[1]);
//			while (1) {
//			if (strcmp(password[0], password[1]) != 0 || strlen(password[0]) != 6) {	//判断两次输入的密码是否相同，且是否为6位
//				system("cls");													//判断出不正确，清屏后，重新显示出提示
//				printf("\n\n\t\t\t\t◎ 新用户注册界面 ◎");
//				printf("\n\n\n\n\t\t\t\t请输入你的姓名：%s", (p + x)->name);	//输入名字
//				printf("\n\n\n\t\t       （您输入的密码两次不一或密码不为6位数）");
//				printf("\n\n\n\t\t\t\t请重新输入您的密码：");
////				inputpassword(password[0], sizeof(password[0]));		//隐藏输入的密码
//				printf("\n\n\t\t\t\t请再次输入您的密码：");
////				inputpassword(password[1], sizeof(password[1]));		//隐藏输入的密码
//			}
//			else {
//				strcpy((p + x)->password, password[0]);			//两次密码匹配正确后，复制密码到数据库
//				break;
//			}
//			
//			printf("\n\n\n\t\t\t------------------注册成功-------------------\n\n\t\t\t\tyour number is :");
//		(p + x)->num[20] = x;
//		printf("%06d\n\n\t\t\t\tyour password is : ******\n\n", (p + x)->num);
//		printf("\t\t\t\t您的开户金额为：0.00元\n\n");
//		printf("\n\n\n\t\t\t\t（请按回车键返回主界面）\n\n\t\t\t\t");
//		getch();						//不经过键盘缓冲区的字符输入函数，不回显
//		system("cls");
////		(p + x)->judge= 1;					//代表该账号已被注册
////		x++;								//准备下个空账号的注册
//	}
//		
//}
// 
//void login()
// {
//    } 
// 
// void exit()
// {
// 	
// }
// 
// 
// 
// 
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//#include<stdio.h>
//int main()
//{
//	int n,i=0;
//	for(n=100;n<=200;n++)
//	{
//	if(n%3==0)
//	
//      continue;
//	 i++;
//	 
//      if(i%10==0)
//	 printf("\n");
//      printf("%d",n);
//	 	}
//	 
//	 return 0;	
//  }  
#include<stdio.h>
#include<string.h>
int *p,x=0;

int main()
{
	char password[2][10];
	printf("please input your password:");
	scanf("%s",password[0]);
	
		printf("please input your password agin:");
	scanf("%s",password[1]);
  
	while(1)
	{
		if (strcmp(password[0], password[1]) != 0 || strlen(password[0]) != 6) {	//判断两次输入的密码是否相同，且是否为6位
				system("cls");													//判断出不正确，清屏后，重新显示出提示
				printf("\n\n\t\t\t\t◎ 新用户注册界面 ◎");
//				printf("\n\n\n\n\t\t\t\t请输入你的姓名：%s", (p + x)->name);	//输入名字
				printf("\n\n\n\t\t       （您输入的密码两次不一或密码不为6位数）");
				printf("\n\n\n\t\t\t\t请重新输入您的密码：");
//				inputpassword(password[0], sizeof(password[0]));		//隐藏输入的密码
				printf("\n\n\t\t\t\t请再次输入您的密码：");
//				inputpassword(password[1], sizeof(password[1]));		//隐藏输入的密码
			}
			else {
//				strcpy((p + x)->password, password[0]);			//两次密码匹配正确后，复制密码到数据库
				break;
			}
	}
	
	
	
	
	
	
	
	 
	
}








































