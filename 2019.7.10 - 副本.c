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
////		case 'A':action1(a,b);break;// ����action1����ִ��a����
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
////	scanf("%f",&x);// xǰ��ķ��� 
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
//	int judge[1000]; // �жϸ��˺��Ƿ�ע�� 
//	
//} *p;
//
//int main()
//{
//	printf("\n\n\t\t\t Welcome to ����ʵѵ�����棺");
//	printf("\n\n\t\t\t��A�����û�ע��"); 
//	printf("\n\n\t\t\t��B�����û���¼");
//	printf("\n\n\t\t\t��C�����˳�ϵͳ");
//	
//	printf("\n\n\t\t\t��������ķ������ͣ�");
//	void regist();
//	void login();  
//	void exit();
//	char ch;
//	ch=getchar();
//	printf("\n\n\t\t\t��������ķ������ͣ�");  // ��ȡѡ������ 
//	switch(ch)
//	{
//		case 'a':
//		case 'A':  regist();break;
//		case 'b':
//		case 'B':   login();break;
//		case 'c':
//		case 'C':   exit();break;
//		default:
//			printf("�����������");
////				system("cls");	
//	 }
//	  
//}
//void regist()// ����ע��
//{	
//   char password[2][10];		//����������ȷ������
//		printf("\n\n\t\t\t\t�� ���û�ע����� ��");
//		printf("\n\n\n\n\t\t\t\t�������������   ��");
//		scanf("%s", (p + x)->name);
//		getchar();
//		
//		printf("\n\n\n\n\t\t\t\t����������˺�  ��");
//			scanf("%s",(p+x)->num); 
//				//�����Լ�������
//		printf("\n\n\t\t\t\t����������6λ���룺");
//		scanf("%d",&password[0]);	
//		printf("\n\n\t\t\t\t���ٴ���������6λ���룺");
//		scanf("%d",&password[1]);
//			while (1) {
//			if (strcmp(password[0], password[1]) != 0 || strlen(password[0]) != 6) {	//�ж���������������Ƿ���ͬ�����Ƿ�Ϊ6λ
//				system("cls");													//�жϳ�����ȷ��������������ʾ����ʾ
//				printf("\n\n\t\t\t\t�� ���û�ע����� ��");
//				printf("\n\n\n\n\t\t\t\t���������������%s", (p + x)->name);	//��������
//				printf("\n\n\n\t\t       ����������������β�һ�����벻Ϊ6λ����");
//				printf("\n\n\n\t\t\t\t�����������������룺");
////				inputpassword(password[0], sizeof(password[0]));		//�������������
//				printf("\n\n\t\t\t\t���ٴ������������룺");
////				inputpassword(password[1], sizeof(password[1]));		//�������������
//			}
//			else {
//				strcpy((p + x)->password, password[0]);			//��������ƥ����ȷ�󣬸������뵽���ݿ�
//				break;
//			}
//			
//			printf("\n\n\n\t\t\t------------------ע��ɹ�-------------------\n\n\t\t\t\tyour number is :");
//		(p + x)->num[20] = x;
//		printf("%06d\n\n\t\t\t\tyour password is : ******\n\n", (p + x)->num);
//		printf("\t\t\t\t���Ŀ������Ϊ��0.00Ԫ\n\n");
//		printf("\n\n\n\t\t\t\t���밴�س������������棩\n\n\t\t\t\t");
//		getch();						//���������̻��������ַ����뺯����������
//		system("cls");
////		(p + x)->judge= 1;					//������˺��ѱ�ע��
////		x++;								//׼���¸����˺ŵ�ע��
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
		if (strcmp(password[0], password[1]) != 0 || strlen(password[0]) != 6) {	//�ж���������������Ƿ���ͬ�����Ƿ�Ϊ6λ
				system("cls");													//�жϳ�����ȷ��������������ʾ����ʾ
				printf("\n\n\t\t\t\t�� ���û�ע����� ��");
//				printf("\n\n\n\n\t\t\t\t���������������%s", (p + x)->name);	//��������
				printf("\n\n\n\t\t       ����������������β�һ�����벻Ϊ6λ����");
				printf("\n\n\n\t\t\t\t�����������������룺");
//				inputpassword(password[0], sizeof(password[0]));		//�������������
				printf("\n\n\t\t\t\t���ٴ������������룺");
//				inputpassword(password[1], sizeof(password[1]));		//�������������
			}
			else {
//				strcpy((p + x)->password, password[0]);			//��������ƥ����ȷ�󣬸������뵽���ݿ�
				break;
			}
	}
	
	
	
	
	
	
	
	 
	
}








































