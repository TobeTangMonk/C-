#include<stdio.h>
int main()
{

union
{
	int d;
	char ch;
	
}u;
u.d=96;
u.ch='C';//�����ֵ������ 
printf("%d\n",u.d);
return 0;
} 
