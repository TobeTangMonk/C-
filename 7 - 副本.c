#include<stdio.h>
int main()
{
	float down,file,time;
	
	printf("���������ص��ٶȣ�");
	scanf("%f",&down);
	printf("�������ļ��Ĵ�С��");
	scanf("%f",&file);
	time=file/down;
	printf("���ٶ�%.2fmb/s����һ��%.2fmb��С���ļ���Ҫ��ʱ��Ϊ%.fs\n",down,file,time);
	
	return 0;
}
