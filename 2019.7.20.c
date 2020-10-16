#include<stdio.h>
int main()
{  
	int n,i,j;
	char str[10];
	printf("please input n:");
	scanf("%d",&n);
	for(i=10000;i<=100000;i++)
	{
		sprintf(str,"%d",i);
	int sum=0;
	for(j=0;str[j];j++)// 注意顺序问题 
	sum+=str[j]-'0';
	//字符和数字和数字的区别。将字符变数字减去一个零 
	if(sum !=n)
	continue;
	if(i<10000 &&str[0]==str[4]&&str[1]==str[3])
	printf("%d\n",i);
	else if(i>10000 &str[0]==str[5]&&str[1]==str[4]&&str[2]==str[3])
	printf("%d\n",i);
		
	}
	
	return 0;
	
	
 } 
// 
//#include<stdio.h> 
//int main(){
//int n,i,j,sum;
//char str[10];
//printf("please input n:");
//scanf("%d",&n);
//for(i=10000;i<1000000;i++){
///*将当前的i值转成字符赋给str,即str[5]="10000"*/
//sprintf(str, "%d", i);
//sum = 0;//初始化sum 
//for(j = 0; str[j]; j++)
///*字符和数字是有区别的。要将字符变成数字，需要减去一个字符0*/
//sum += str[j] - '0';

//if(sum != n)
//continue;
//if(i < 100000 && str[0] == str[4] && str[1] == str[3])
//printf("%d\n",i);
//else if(i >= 100000 && str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
//printf("%d\n", i);
//}
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	char str[6];
//	scanf("%d",&n);
//      for(i=1000;i<=10000;i++)
//      { sprintf(str,"%d",i);
//      if(str[0]==str[3]&&str[1]==str[2])
//      {
//      	printf("%d\n",i);
//      	continue;
//	 }
//      	
//	 }
//	
//}
//#include<stdio.h>
//int main()
//{
//	int min ,max,factor;
//	scanf("%d%d%d",&min,&max,&factor);
//	
//}
//#include<stdio.h>
//int main()
//{
//	char strhex[10];
//	int i=0,len=0,temp=0;
//	long long answer=0;
//	gets(strhex);
//	len=strlen(strhex);
//	for(i=0;strhex[i]!='\0';++i)
//	{
//		switch(strhex[i])
//		{
//			case'A':temp=10;break;
//			case'B':temp=11;break;
//			case'C':temp=12;break;
//			case'D':temp=13;break;
//			case'E':temp=14;break;
//			case'F':temp=15;break; 
//			default :temp=strhex[i]-'0';break;
//		}
//		answer +=(temp*pow(16,len-1-i));// pow函数作用：计算x的y次方 
//		
//		
//	}
//	printf("%11d",answer);
//	return 0;	
//		
//		
//		
//	}
//	                 努力  进制转换问题   
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
// 
//int getN(char s)
//{
//    char nn;
//    switch(s)
//    {
//        case '0':nn=0;break;
//        case '1':nn=1;break;
//        case '2':nn=2;break;
//        case '3':nn=3;break;
//        case '4':nn=4;break;
//        case '5':nn=5;break;
//        case '6':nn=6;break;
//        case '7':nn=7;break;
//        case '8':nn=8;break;
//        case '9':nn=9;break;
//        case 'A':nn=10;break;
//        case 'B':nn=11;break;
//        case 'C':nn=12;break;
//        case 'D':nn=13;break;
//        case 'E':nn=14;break;
//        case 'F':nn=15;break;
//    }
//    return nn;
//}
// 
//int main()
//{
//    char s[9];
//    gets(s);
//    char i;
//    long long sum=0;
//    for(i=strlen(s)-1;i>=0;i--)
//    {
//        int num=getN(s[i]);
//        sum+=num*pow(16,strlen(s)-i-1);
//    }
//    printf("%lld\n",sum);
//    return 0;
//}
//
                         // 蓝桥杯的阶乘余数问题 
//# include <stdio.h> 
//
//int f[1010], n;
//printf("请输入你的阶乘N:");
//int gcd(int a, int b){
//	if(a%b==0)return b;
//	return gcd(b, a%b);
//}
//void init(){
//	int i;
//	for( i=1; i<=n; i++){
//		f[i]=i;
//	}
//}
//void divide(){
//	int ans=10;
//	int i;
//	for(i=1; ans!=1&&i<=n; i++){
//		int temp=gcd(ans, f[i]);
//		f[i]=f[i]/temp;
//		ans=ans/temp;
//	}
//}
//int mod(){
//	int ans=1;
//	int i;
//	for( i=1; i<=n; i++){
//		ans=ans*f[i]%10;
//	}
//	return ans;
//}
//int main(){
//	int i, j, k;
//	scanf("%d", &n);
//	if(n==0){
//		printf("1");
//		return 0;
//	}
//	init();
//	while(1){
//		int temp;
//		if(temp=mod()){
//			printf("%d", temp);
//			return 0;
//		}
//		else{
//			divide();
//		}
//	}
//	return 0;
//}
//
 
 
 
 
 // 字符      与       数字              相互转换的方法   	
//	#include<stdio.h>
//int main()
//{
//  char str[6];
//	int i,j;
//	for(i=1000;i<=10000;i++)
//	{    sprintf(str,"%d",i);//ba ide zhi fu gei str;
//		for(j=0;str[j];j++)
//		 // libian suo you de shu      i zhuan huan wei shu zu
//		 
//		 
//		 {   if(str[0]==str[3]&&str[1]==str[2])
//			printf("%d",i);
//			continue;
//			} 
//			
//	
//}
//
//return 0;
//	
//}
// 
 
//大数运算(7)——大数阶乘(求阶乘)
//2016年09月01日 21:22:12 静之吾心 阅读数 12611 标签： 大数运算 大数阶乘  更多
//个人分类： 大数运算
//版权声明：本文为博主原创文章，未经博主允许不得转载。 https://blog.csdn.net/lisp1995/article/details/52403507
//对于大数来说，一个数的阶乘是非常大的，同样，一个int类型的整数，他的阶乘就有可能会很大。
//
//就拿50来说，他的阶乘位数是65位，就已经远远超过了long long int类型的最大值。这时候，我们要通过字符串的方法，来进行阶乘的运算。
//
//当然，需要注意的是：
//
//我们所求一个数的阶乘，这个数是在int范围内的，5000的阶乘位数是16326位。
//
//其方法是：
//
//首先，我们是可以先求一定范围内的最大值的阶乘位数，以便于申请数组空间的确定。
//
//对于大数问题，我们要有将大数与数组结合的思想，可以利用类似于人工求值的方法求出有关大数的问题。
//
//对于大数阶乘来说，最重要的是如何将每个数的每位数与相对应的数组元素储存起来，就如算50的阶乘，我们要先从1开始乘：
//
//1*2=2,将2存到a[0]中，
//
//接下来是用a[0]*3；
//
//    2*3=6，将6储存在a[0]中，
//
//接下来是用a[0]*4；
//
//    6*4=24，是两位数，那么24%10==4存到a[0]中，24/10==2存到a[1]中，
//
//接下来是用a[0]*5；a[1]*5+num(如果前一位相乘结果位数是两位数，那么num就等于十位上的那个数字；如果是一位数，num==0)
//
//    24*5=120，是三位数，那么120%10==0存到a[0]中，120/10%10==2存到a[1]中，120/100==1存到a[2]中，
//
//接下来是用a[0]*3；a[1]*6+num；a[2]*6+num；
//
//    120*6=720，那么720%10==0存到a[0]中，720/10%10==2存到a[1]中，720/100==7存到a[2]中，
//
//...................
//
//直到乘到50，将每一位数储存为止。
//
//下面是C语言代码实现：
//
//#include <stdio.h>
//int main()
//{
//	int a[20001];//储存每一位所得到的数 
//	int temp,digit,n,i,j=0;//temp每次的得数   digit每次得数的位数  
//	scanf("%d",&n);
//	a[0]=1;//从1开始乘 
//	digit=1;//位数从第一位开始 
//	for(i=2;i<=n;i++)
//	{
//		int num=0;
//		for(j=0;j<digit;j++) 
//		{
//			temp=a[j]*i+num;//将一个数的每一位数都分别乘以i， 
//			a[j]=temp%10;//将一个数的每一位数利用数组进行储存
//			num=temp/10;
//		}
//		while(num)//判断退出循环后，num的值是否为0 
//		{
//			a[digit]=num%10;//继续储存 
//			num=num/10;
//			digit++;
//		}
//	}
//	for(i=digit-1;i>=0;i--)//倒序输出每一位 
//		printf("%d",a[i]);
//	printf("\n");
//	return 0;
//}


   
