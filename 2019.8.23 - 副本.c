#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ch; 
//
//char ch;// �������ַ� 
//char cha;  // ��ӭ�����ַ� 
// int x=0;
//
// 
// struct 
// {    int judge;  // �ж��ַ� 
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
    	printf("\n\t\t\t��ӭ��������ʵѵϵͳ"); 
	printf("\n\t\t\t���Ե�"); 
	int j,t=1;
     for(j=1;j<t;j++)
     {
     	printf(".");
	}
	t++;
	if(t==5)
	t=1;

printf("\n\n\t\t\t        ");
		printf("��\n\t\t\t      ");
		
	switch (i / 10) {
		case 0:printf("<-��->"); printf("  ��������������������\n\t\t\t\t||"); break;
		case 1:printf("--��--"); printf("  ��������������������\n\t\t\t\t��"); break;
		case 2:printf("++��++"); printf("  ��������������������\n\t\t\t\tII"); break;
		case 3:printf("������"); printf("  ��������������������\n\t\t\t\t��"); break;
		case 4:printf("<-��->"); printf("  ��������������������\n\t\t\t\t||"); break;
		case 5:printf("--��--"); printf("  ��������������������\n\t\t\t\t��"); break;
		case 6:printf("++��++"); printf("  ��������������������\n\t\t\t\tII"); break;
		case 7:printf("������"); printf("  ��������������������\n\t\t\t\t��"); break;
		case 8:printf("--��--"); printf("  ��������������������\n\t\t\t\t��"); break;
		case 9:printf("<-��->"); printf("  ��������������������\n\t\t\t\t||"); break;
		default:break;
		}
		
		printf("\t\t\t     %d%%", i);
		if (i > 95)
			printf("\n\n\t\t\t\t\t  ������ɣ�");
			int k;		//���ǰһ˲����ʾ�������
			
		for ( k = 1; k < 50000000; k++);				//��������
		system("cls");		//����
    }
  
  
  void wait()
  {
//  	printf("\n\t\t\t��ѡ����ķ���");
//	printf("\n\t\t\tA:�û���¼");
//	 printf("\n\t\t\tB:��ѡ����ķ���");
//	 printf("\n\t\t\tC:��");
//	  printf("\n\t\t\tD:�˳�");
	 int i = 1;	                    	//�ж��Ƿ��ǵ�һ�������ַ���
	while (1) {
		printf("\n\n\t\t\t������ѡ�����µķ���\n\n");
		printf("\t\t\t\t\t��A��:�û�ע��\n\n");
		printf("\t\t\t\t\t��B��:�û���¼\n\n");
		printf("\t\t\t\t\t��C��:�˳�ϵͳ\n\n");
		if (i == 1) {
			printf("\n\n\t\t\t����������Ҫ�ķ���");
			ch = getchar();
		}
		
		
		
		if (ch == 'a' || ch == 'A' || ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C')	//�ж��Ƿ�Ϊ�����ַ�
			break;
		if (i != 1)		//���ǵ�һ�������ַ�������ʾ����
			printf("\n\n\t\t\t��������ַ��������������룺");
			
		ch = getchar();		//���������ַ�
		system("cls");		//����
		i++;				//�ַ�����i����
	}
	system("cls");			//����
}
  	
    }  
     

 
