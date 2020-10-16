#include<stdio.h>
int main()
{
	float down,file,time;
	
	printf("请输入下载的速度：");
	scanf("%f",&down);
	printf("请输入文件的大小：");
	scanf("%f",&file);
	time=file/down;
	printf("以速度%.2fmb/s下载一个%.2fmb大小的文件需要的时间为%.fs\n",down,file,time);
	
	return 0;
}
