#include<stdio.h>
int main()
{
	
	float quarts;
	float molecules;
	
	printf("������˭�Ŀ�����:");
	scanf("%f",&quarts);
	molecules=quarts*950/3.0e-23;
	
	printf("%f quarts of water cotain %e molecules", quarts,molecules);
	return 0;
 } 
