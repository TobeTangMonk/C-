#include<stdio.h>


//char c;//服务界面字符
//char ch;//主界面字符
//int x=0;   //账户计数器
//FILE *fp;    //指向fp文件指针
//
// void wait()
// { int t=1;
//    int i=;
//    for(i=0;i<100;i++)
//    {
//    	printf("欢迎进入青软实训ATM系统\n\n");
//    	printf("\n\n\n\t\t\t请稍等);
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
// 		printf("\n\n\n\t\t\t o欢迎进入青软实训ATM系统 O \n\n");
// 		printf("\n\n\n\t\t\t请稍等");
// 		int j;
// 		for(j=1;j<=t;j++)
// 		printf(".");
// 		t++;
// 		if(t==5)// 限制小数点个数
// 		t=1;
// 		
// 		
//	 }
// }
 int main()
{																				//等待进入系统界面函数
	int t = 1;
	int i;			//判断小数点个数
	for ( i = 0; i < 100; i++) {
		printf("\n\n\n\t\t\t\t ○ 欢迎使用青软实训ATM系统 ○\n\n");
		printf("\t\t\t\t\t  请稍等待");
		int j;
		for (j = 1; j <= t; j++)		//循环输出小数点
			printf(".");
		t++;								//下次输出的小数点个数多1
		if (t == 5)							//只输出4个小数点
			t = 1;
		printf("\n\n\t\t\t        ");
		printf("○\n\t\t\t      ");
		switch (i / 10) {
		case 0:printf("<-■->"); printf("  ■□□□□□□□□□\n\t\t\t\t||"); break;
		case 1:printf("--■--"); printf("  ■■□□□□□□□□\n\t\t\t\t∥"); break;
		case 2:printf("++■++"); printf("  ■■■□□□□□□□\n\t\t\t\tII"); break;
		case 3:printf("←■→"); printf("  ■■■■□□□□□□\n\t\t\t\t∩"); break;
		case 4:printf("<-■->"); printf("  ■■■■■□□□□□\n\t\t\t\t||"); break;
		case 5:printf("--■--"); printf("  ■■■■■■□□□□\n\t\t\t\t∥"); break;
		case 6:printf("++■++"); printf("  ■■■■■■■□□□\n\t\t\t\tII"); break;
		case 7:printf("←■→"); printf("  ■■■■■■■■□□\n\t\t\t\t∩"); break;
		case 8:printf("--■--"); printf("  ■■■■■■■■■□\n\t\t\t\t∥"); break;
		case 9:printf("<-■->"); printf("  ■■■■■■■■■■\n\t\t\t\t||"); break;
		default:break;
		}
		printf("\t\t\t     %d%%", i);R
		if (i > 95)
			printf("\n\n\t\t\t\t\t  加载完成！");
			int k;		//完成前一瞬间显示加载完成
		for ( k = 1; k < 50000000; k++);				//减缓抖屏
		system("cls");		//清屏清除重复的
}
}
