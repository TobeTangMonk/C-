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
	for(j=0;str[j];j++)// ע��˳������ 
	sum+=str[j]-'0';
	//�ַ������ֺ����ֵ����𡣽��ַ������ּ�ȥһ���� 
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
///*����ǰ��iֵת���ַ�����str,��str[5]="10000"*/
//sprintf(str, "%d", i);
//sum = 0;//��ʼ��sum 
//for(j = 0; str[j]; j++)
///*�ַ���������������ġ�Ҫ���ַ�������֣���Ҫ��ȥһ���ַ�0*/
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
//		answer +=(temp*pow(16,len-1-i));// pow�������ã�����x��y�η� 
//		
//		
//	}
//	printf("%11d",answer);
//	return 0;	
//		
//		
//		
//	}
//	                 Ŭ��  ����ת������   
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
                         // ���ű��Ľ׳��������� 
//# include <stdio.h> 
//
//int f[1010], n;
//printf("��������Ľ׳�N:");
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
 
 
 
 
 // �ַ�      ��       ����              �໥ת���ķ���   	
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
 
//��������(7)���������׳�(��׳�)
//2016��09��01�� 21:22:12 ��֮���� �Ķ��� 12611 ��ǩ�� �������� �����׳�  ����
//���˷��ࣺ ��������
//��Ȩ����������Ϊ����ԭ�����£�δ������������ת�ء� https://blog.csdn.net/lisp1995/article/details/52403507
//���ڴ�����˵��һ�����Ľ׳��Ƿǳ���ģ�ͬ����һ��int���͵����������Ľ׳˾��п��ܻ�ܴ�
//
//����50��˵�����Ľ׳�λ����65λ�����Ѿ�ԶԶ������long long int���͵����ֵ����ʱ������Ҫͨ���ַ����ķ����������н׳˵����㡣
//
//��Ȼ����Ҫע����ǣ�
//
//��������һ�����Ľ׳ˣ����������int��Χ�ڵģ�5000�Ľ׳�λ����16326λ��
//
//�䷽���ǣ�
//
//���ȣ������ǿ�������һ����Χ�ڵ����ֵ�Ľ׳�λ�����Ա�����������ռ��ȷ����
//
//���ڴ������⣬����Ҫ�н������������ϵ�˼�룬���������������˹���ֵ�ķ�������йش��������⡣
//
//���ڴ����׳���˵������Ҫ������ν�ÿ������ÿλ�������Ӧ������Ԫ�ش���������������50�Ľ׳ˣ�����Ҫ�ȴ�1��ʼ�ˣ�
//
//1*2=2,��2�浽a[0]�У�
//
//����������a[0]*3��
//
//    2*3=6����6������a[0]�У�
//
//����������a[0]*4��
//
//    6*4=24������λ������ô24%10==4�浽a[0]�У�24/10==2�浽a[1]�У�
//
//����������a[0]*5��a[1]*5+num(���ǰһλ��˽��λ������λ������ônum�͵���ʮλ�ϵ��Ǹ����֣������һλ����num==0)
//
//    24*5=120������λ������ô120%10==0�浽a[0]�У�120/10%10==2�浽a[1]�У�120/100==1�浽a[2]�У�
//
//����������a[0]*3��a[1]*6+num��a[2]*6+num��
//
//    120*6=720����ô720%10==0�浽a[0]�У�720/10%10==2�浽a[1]�У�720/100==7�浽a[2]�У�
//
//...................
//
//ֱ���˵�50����ÿһλ������Ϊֹ��
//
//������C���Դ���ʵ�֣�
//
//#include <stdio.h>
//int main()
//{
//	int a[20001];//����ÿһλ���õ����� 
//	int temp,digit,n,i,j=0;//tempÿ�εĵ���   digitÿ�ε�����λ��  
//	scanf("%d",&n);
//	a[0]=1;//��1��ʼ�� 
//	digit=1;//λ���ӵ�һλ��ʼ 
//	for(i=2;i<=n;i++)
//	{
//		int num=0;
//		for(j=0;j<digit;j++) 
//		{
//			temp=a[j]*i+num;//��һ������ÿһλ�����ֱ����i�� 
//			a[j]=temp%10;//��һ������ÿһλ������������д���
//			num=temp/10;
//		}
//		while(num)//�ж��˳�ѭ����num��ֵ�Ƿ�Ϊ0 
//		{
//			a[digit]=num%10;//�������� 
//			num=num/10;
//			digit++;
//		}
//	}
//	for(i=digit-1;i>=0;i--)//�������ÿһλ 
//		printf("%d",a[i]);
//	printf("\n");
//	return 0;
//}


   
