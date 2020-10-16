#include<stdio.h>
int main()
{
	
	float weight,money;
	printf("请输入行李箱的重量");
	scanf("%f",&weight);
	if(weight<40)
	money=weight*0.3;
	else
	money=weight*0.3+(weight-40)*0.45;
	printf("行李箱的重量：%f,运费：%发\n",weight,money);
	return 0;
 } 
