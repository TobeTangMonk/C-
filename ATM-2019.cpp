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
 void resister();//��������
 /*void login();
 void quit();*/
 int main()
 {
 	char num;          //���ñ���numѡ���i����,t������
					   //int i, t = 1;
					   //for (i = 1; i <= 100; i++)     //�ý��ȴ�һ�ӵ�һ��
					   //{
					   //	printf("\n\n\n\t\t\t\t\t\t\t����ӭʹ��ATMϵͳ����\n\n");
					   //	printf("\t\t\t\t\t\t\t�����ڵ�¼���Ժ�");
					   //	for (int j = 1; j <= t; j++)    //�õ��������
					   //	{
					   //		printf(".");
					   //	}
					   //	t++;    //����С����
					   //	if (t == 11)     //�������ﵽ11ʱ��������Ϊ1���������ӡ�
					   //		t = 1;
					   //	printf("\n\n\t\t\t\t\t\t\t\t%d%%", i);      //������ȡ�
					   //	system("cls");    //����
					   //}
	while (1)
	{
		/*system("cls");*/
		printf("\n\n");
		printf("\t\t\t\t\t\t\t**************\n\n");
		printf("\t\t\t\t\t\t\t   �����\n");      //������ҳ��
		printf("\t\t\t\t\t\t\t������桽��\n");
		printf("\t\t\t\t\t\t\t   �����\n\n\n");
		printf("\t\t\t\t\t\t      ��    ��A���û�ע��\n");
		printf("\t\t\t\t\t\t      ��    ��B���û���¼\n");
		printf("\t\t\t\t\t\t      ��    ��C���˳�ϵͳ\n\n\n");
		printf("\t\t\t\t\t\t\t����ѡ��ִ�����ݣ�");
		scanf("%c", &num);     //����ѡ���ѡ��
		getchar();    //��ȡ���̻������Ļس���
	
		if (num == 'a' || num == 'A')       //ѡ���û�ע��ҳ��
			resister();   //����ע��ҳ�溯��
			return 0;
		}
 	
 }
  
