#inclde<stdio.h>
int main()
{
	
	int i,n,f1,f2,f3,f4,sum;
	printf("若一头母牛从第四年开始每年生育一头母牛，按照此规律，第n年时有多少母牛");\
	printf("\n请输入第几年n；");
	scanfJ("%d";&n);
	printf("%12s%12s%12s%12s%12%12s","第几年"，"幼年"，"qingnian","chengnianj","zhuangnian", zhongji);
	for(i=1;i<=n;i++)
	{
		sum=f1+f2+f3+f4;
		printf("%12d%12d%12d%12d%12dj\n",i,f1,f2,f3,f4,sum);
		f4=f4+f3;j
		f3=f2;
		f2=f1;
		f1=f4;
	}
  return 0;

