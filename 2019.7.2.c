/*#include<stdio.h>
 
void main(){
	int i,j;
    char a[100];
    char b[100];
   // printf("please input a string:");
   // scanf("%s",&a[i]);
    getch();
   
    gets(a);
    

    for(i=0;;i++){
        if(a[i]=='\0')//��ס�ѿո��ǽ�ȥ 
	   {
            break;
        }else{

        j=2*i;  // Ϊ�˽��±�Ϊ��������ĸ����b 
        b[i]=a[j];
        if(b[i]>'a' && b[i]<'z'){
            b[i]+=-32;//��Сд��ĸ��Ϊ��д��ĸ 
        }else{
            return 0;
        }
        //printf("%c",a[i]);
        printf("%c",b[i]);
    }
  }

}
*/
//#include<stdio.h>
//#include<string.h>
//#define N 258
//int main()
//{
//	int T,i,j,m;
//	char a[N],b[N/2];
//	printf("������Ե����飺");
//	scanf("%d",&T);
//	getchar();
//	while(T--)
//	{
//		j=0;
//		puts("����һ���ַ���");
//		gets(a);
//		m=strlen(a);
//		for(i=1;i<m;i+=2)
//		{
//			if(a[i]>='a' && a[i]<='z')//
//			{
//				b[j]=a[i]-32;
//				j++;
//			}
//			else{
//				b[j]=a[i];
//				j++;
//			}
//			b[j]='\0';
//			
//		}
//		printf("%s\n",b);
//	 } 
//	 return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sort(int n);
//	char a[10];
//	int i,j,temp;
//	printf("please input 10 intergers:");
//	for(i=1;i<=10;i++)
//	scanf("%d",&a[i]);
//	for(i=1;i<=10;i++)
//	{
//		for(j=i+1;j<=10;j++)
//		if(a[i]>a[j])
//		{
//			temp=a[j];a[j]=a[i];a[i]=temp;// ����Ϊ��С��ֵ 
//			
//		}
//	printf("%d",temp);
////	printf("");
//	}
//	return 0;
//	 
// } 

//#include<stdio.h>
//#define N 3
//int main()
//{
//	int a[N][N];
//	int i,j,sum=0;//Ҫ��ֵ 
//	printf("please input a[3][3]����");
//	for(i=0;i<N;i++)
//	 for(j=0;j<N;j++)
//	scanf("%3d",&a[i][j]);
//	for(i=0;i<N;i++)
//
//	 	sum+=a[i][i];
//	 
//		 
//
//	  printf("sum=%5d",sum);
//	  
//	return 0;
//}
//#include<stdio.h>
//#define N 5
//int main()
//{
//	int a[N];
//	int i,n;
//	printf("please input a[N]:");
//	for(i=0;i<2;i++)
//	scanf("%d",&a[N]);
//	printf("please input insert place:");
//	scanf("%d",n);
//	int k,j;
//	int a_len;
//	strlen(a)
//// } 
//#include<stdio.h>
//#define N 3 
//#define M 2
//int main()
//{ 
//  int a[N][M];
//  int i,j;
//  printf("please input a[N][M]");
//  for(i=0;i<N;i++)
//  for(j=0;j<M;j++)
//  scanf("%d",a[i][j]);
//  int maxj=0,max=a[i][0],flag=0;
//  for(i=0;i<N;i++)
//  {if(max<a[i][j])
//  {
//  	max=a[i][j];
//  	maxj=j;
//  	
//  }
//  }
//  flag=1;
//  for(j=0;j<M;j++)
//  {if(max<a[i][maxj])
//  printf("%d",max);
//  else
//  {printf("û�а��㣺");
//       }
//  
//  }
//   return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[15];
//	int i,j,t;
//	for(i=0;i<3;i++)
//	scanf("%d",a[i]);
//	printf("please input a interger:");
//	scanf("%d",&t);
//	 
//}
//#include<stdio.h>
//int main()
//{
//	int a[3][80],i,j;
//	printf("please input string:");
//	for(i=0;i<3;i++)
//	for(j=0;j<80;j++)
//	scanf("%d",&a[i][j]);
//	int r1=0,r2=0,r3=0,e1=0;
//	for(j=0;j<80;j++)
//	{	if(a[0][80]>'0' && a[0][80]<'9')
//	{
//		r1++;
//		continue;
//	}
//	else if(a[0][80]>'a' && a[0][80]<'z')
//	
//	e1++;
//	continue;
//	}
//	printf("%d",r1);
//    printf("%d",e1);
//}
#include<stdio.h>




















