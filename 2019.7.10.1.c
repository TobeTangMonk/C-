#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define AN 9 //��ʾ�˺�8λ
#define PN 7 //��ʾ����6λ
#define ASN 3 //��ʾϵͳ�й���3���˻���Ϣ
struct Account
{
char accountnumber[AN]; //��ʾ�˺���Ϣ
char password[PN]; //��ʾ�˻���������Ϣ
double balance; //��ʾ�˻������
};
struct Account ats[ASN]={{"00000001","123456",100},{"00000002","123456",200},{"00000003","123456",300}};
//ats�������ڴ洢ϵͳ�������˻�����Ϣ
int isCorrect(char *an,char *psd)
{
int i;
for(i=0;i<ASN;i++)
if(strcmp(ats[i].accountnumber,an)==0 && strcmp(psd,ats[i].password)==0)
return 1;
return 0;
}
double getBalance(char *an)
{
int i;
for(i=0;i<ASN;i++)
if(strcmp(an,ats[i].accountnumber)==0)
return ats[i].balance;
}
void deposit(char *an,int amount)
{
int i;
for(i=0;i<ASN;i++)
if(strcmp(an,ats[i].accountnumber)==0)
ats[i].balance+=amount;
}
int withdraw(char *an,int amount)
{
int i;
for(i=0;i<ASN;i++)
if(strcmp(an,ats[i].accountnumber)==0)
return ats[i].balance-=amount;
}
void main()
{
char AccountNumber[AN]={'\0'};
char psd[PN]={'\0'};
int i,errorcount=0;
while(1)
{
	int account;
printf("\n������8λ�˺ţ�");
scanf("%d",&account);
for(i=0;i<8;i++)
AccountNumber[i]=getch();
printf("\n������6Ϊ���룺");
for(i=0;i<6;i++)
{
psd[i]=getch();
putchar('*');
}
if(isCorrect(AccountNumber,psd)==1)
{
int tag,amount;
while(1)
{
printf("\n��ӭ��¼�����˻�����ϵͳ����ѡ����Ҫ�ķ���1����ѯ��2����������3��ȡ�������4���˳�ϵͳ\n");
scanf("%d",&tag);
switch(tag)
{
case 1:
printf("�����ڵ����Ϊ%fԪ\n",getBalance(AccountNumber));
break;
case 2:
printf("���������Ĵ���");
scanf("%d",&amount);
deposit(AccountNumber,amount);
printf("���ɹ������ĵ�ǰ���Ϊ��%fԪ\n",getBalance(AccountNumber));
break;
case 3:
printf("����������ȡ���");
scanf("%d",&amount);
if(amount<=getBalance(AccountNumber))
printf("ȡ��ɹ������ĵ�ǰ���Ϊ��%fԪ\n",withdraw(AccountNumber,amount));
else
printf("ȡ��ʧ�ܣ�\n");
break;
case 4:
break;
}
if(tag==4)
break;
}
}
else
{
errorcount++;
if(errorcount==3)
{
printf("���Ѿ����������������ϵͳ���Զ��ر�\n");
break;
}
}
}
}
