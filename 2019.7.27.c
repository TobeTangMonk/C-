// ʮ����ת��Ϊʮ������       
//#include <stdio.h>
//int main(void)
//{
//	char b[10],i,k=0,a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
//    long n;
//    scanf("%d",&n);
//    if (n==0)
//    printf("0");
//    else
//    {
//    while (n) // �ȼ���while(n!=0)
//    {
//    	b[k++]=a[n%16];// �����Ļ�A�൱��10��BΪ11CΪ12 ��ʮ����ת��Ϊʮ������ 
//    	n/=16;// �൱��n=n/16; 
//    }
//    for (i=k-1;i>=0;i--)
//    printf("%c",b[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
// 
//char getnum(int z)
//{
//    switch(z)
//    {
//        case 0:return '0';break;
//        case 1:return '1';break;
//        case 2:return '2';break;
//        case 3:return '3';break;
//        case 4:return '4';break;
//        case 5:return '5';break;
//        case 6:return '6';break;
//        case 7:return '7';break;
//        case 8:return '8';break;
//        case 9:return '9';break;
//        case 10:return 'A';break;
//        case 11:return 'B';break;
//        case 12:return 'C';break;
//        case 13:return 'D';break;
//        case 14:return 'E';break;
//        case 15:return 'F';break;
//    }
//}
// 
//int a[100000000];
//int main()
//{
//    int n,k=0,l;
//    scanf("%d",&n);
//    if(n==0)
//    {
//        putchar('0');
//        return 0;
//    }
//    while(n)
//    {
//         a[k++]=n%16;
//         n/=16;
//    }
//    for(l=k-1;l>=0;l--)
//    {
//         putchar(getnum(a[l]));
//    }
//        putchar('\n');
//    return 0;
//} 

//#include<stdio.h>
//
//void digui(int i) {
//	if (i==0) printf("");
//	else {
//		digui(i-1);// �ȱ�ִ�� printf(
//		printf("%c",'A'+i-1);//
//		digui(i-1);
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	digui(n);
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{   char ar[8000];
//	int n;
//	scanf("%d",&n);
//	printf("please input your strings:");
//	gets(ar);
//	getcha();
//	int l=strlen(ar);
//	if(l%2)
//	{
////		for(i,ar[i];i++)
////		if()
//	printf("Impossible");	
//	}
//	
//	
//	
//	
//	
//	
//	
//	
//}



// �����Ĵ���  mamad �任ΪmadamΪ�������� ���ٴ���3 

//#include<stdio.h>
//int main()
//{ 
//int n;
//scanf("%s",&a);
//int i, j,l,t;  
// j=n-1;
// int flag=0;
// int step=0;
// for(i=0;i<j;i++)
// {
// 	t=j;
// 	//����ƥ����ַ�
//	 
//	 while(a[i]!=a[t])
//	 {
//	 	t--;
//	  } 
//	  char temp;
//	  if(i==t)   //���Ϊ�����ַ�
//	  {
//	  	flag++;
//	  	if(n%2==0||flag>1)
//	  	{
//	  		printf("impossible");
//	  		return 0;
//		  }
//		  step=n/2-i;
//		  continue;
//	   } 
// }

#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	while(i<100)
	{
		sum+=i;
		i++;
	}
	printf("%d",i);
	return 0;
}






	
	


