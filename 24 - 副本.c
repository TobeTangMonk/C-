#include<stdio.h>
int main()
{
	int a,b,c,d, max;
	scanf("�������ĸ�����",&a,&b,&c,&d);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=a;
	if(a<b)
	max=b;
	if(a<c)
	max=c;
	if(a<d)
	max=d;
	printf("max=%d\n",max);
	return 0;
	 
}
