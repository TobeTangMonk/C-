#include<stdio.h>
int main()
{
	
	float weight,money;
	printf("�����������������");
	scanf("%f",&weight);
	if(weight<40)
	money=weight*0.3;
	else
	money=weight*0.3+(weight-40)*0.45;
	printf("�������������%f,�˷ѣ�%��\n",weight,money);
	return 0;
 } 
