#include<stdio.h>


//char c;//��������ַ�
//char ch;//�������ַ�
//int x=0;   //�˻�������
//FILE *fp;    //ָ��fp�ļ�ָ��
//
// void wait()
// { int t=1;
//    int i=;
//    for(i=0;i<100;i++)
//    {
//    	printf("��ӭ��������ʵѵATMϵͳ\n\n");
//    	printf("\n\n\n\t\t\t���Ե�);
//    	int j;
//    	for(j=1;j<=t;j++)   
//    	printf(".");
//    	t++;
//    	if(t==5)
//    	
//    	
//    }
// 	
// 	
// 	
// 	
// }
// void main()
// {
// 	int t=1;
// 	int i;
// 	for(i=0;i<100;i++)
// 	{
// 		printf("\n\n\n\t\t\t o��ӭ��������ʵѵATMϵͳ O \n\n");
// 		printf("\n\n\n\t\t\t���Ե�");
// 		int j;
// 		for(j=1;j<=t;j++)
// 		printf(".");
// 		t++;
// 		if(t==5)// ����С�������
// 		t=1;
// 		
// 		
//	 }
// }
 int main()
{																				//�ȴ�����ϵͳ���溯��
	int t = 1;
	int i;			//�ж�С�������
	for ( i = 0; i < 100; i++) {
		printf("\n\n\n\t\t\t\t �� ��ӭʹ������ʵѵATMϵͳ ��\n\n");
		printf("\t\t\t\t\t  ���Եȴ�");
		int j;
		for (j = 1; j <= t; j++)		//ѭ�����С����
			printf(".");
		t++;								//�´������С���������1
		if (t == 5)							//ֻ���4��С����
			t = 1;
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
		printf("\t\t\t     %d%%", i);R
		if (i > 95)
			printf("\n\n\t\t\t\t\t  ������ɣ�");
			int k;		//���ǰһ˲����ʾ�������
		for ( k = 1; k < 50000000; k++);				//��������
		system("cls");		//��������ظ���
}
}
