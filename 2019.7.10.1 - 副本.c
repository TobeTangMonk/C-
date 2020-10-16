#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define AN 9 //表示账号8位
#define PN 7 //表示密码6位
#define ASN 3 //表示系统中共有3个账户信息
struct Account
{
char accountnumber[AN]; //表示账号信息
char password[PN]; //表示账户的密码信息
double balance; //表示账户的余额
};
struct Account ats[ASN]={{"00000001","123456",100},{"00000002","123456",200},{"00000003","123456",300}};
//ats数组用于存储系统中三个账户的信息
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
printf("\n请输入8位账号：");
scanf("%d",&account);
for(i=0;i<8;i++)
AccountNumber[i]=getch();
printf("\n请输入6为密码：");
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
printf("\n欢迎登录银行账户管理系统，请选择您要的服务：1、查询余额；2、存款操作；3、取款操作；4、退出系统\n");
scanf("%d",&tag);
switch(tag)
{
case 1:
printf("您现在的余额为%f元\n",getBalance(AccountNumber));
break;
case 2:
printf("请输入您的存款金额：");
scanf("%d",&amount);
deposit(AccountNumber,amount);
printf("存款成功！您的当前余额为：%f元\n",getBalance(AccountNumber));
break;
case 3:
printf("请输入您的取款金额：");
scanf("%d",&amount);
if(amount<=getBalance(AccountNumber))
printf("取款成功！您的当前余额为：%f元\n",withdraw(AccountNumber,amount));
else
printf("取款失败！\n");
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
printf("您已经连续三次输入错误，系统将自动关闭\n");
break;
}
}
}
}
