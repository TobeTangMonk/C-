//#include<stdio.h>
//
//
//void input( int [][34] , int );
//void print( int (*)[34] , int );
//
//
//int main(void)
//{
//	int yh[34][34] = {0};
//	int n ;
//	scanf("%d", & n );
//	input(yh,n);
//	print(yh,n);
//	return 0;
//}
//
//
//void print( int (*p_h)[34] , int n )
//{
//	int i ;
//	for( i = 0 ; i < n ; i ++ )
//	{
//		int j ;
//		for( j = 0 ; j <= i ; j ++ )
//		{
//			printf("%d " , * ( * (p_h + i ) + j ) );//p_h[i][j]
//		}
//		putchar('\n');
//	}
//}
//
// 
//void input( int yh[][34] , int n )
//{
//	int i ;
//	for( i = 0 ; i < n ; i ++ )
//	{
//		yh[i][0] = 1;
//		yh[i][i]=1;
//		int j ;
//		for( j = 1 ; j <= i ; j ++ )
//		{
//			yh[i][j] = yh[i - 1][j] + yh[i - 1][j - 1] ;
//			
//		}
//	     
//	
//		
//	}
//}
//#include<stdio.h>
//
//
//void input(int [][34],int n);
//void print(int (*p)[34],int n);
//
//int main()
//{     int yh[34][34]={0};
//	int n;
//	scanf("%d",&n);
//	void input(yh,n);
//	void print(yh,n);
//	return 0;
//}
//void input(int yh[][34],int n)
//{
//	int i;
//	for(i=1;i<n;i++)
//	{
//		yh[i][0]=1;
//		yh[i][i]=1;
//		int j;
//		for(j=2;j<i;j++)
//		{yh[i][j]=yh[i-1][j]+yh[i-1][j-1];
//		
//		}
//		
//	}
//	
//void print(int (*p)[34],int n)
//{
//	int i,j;
//	for(i=1;i<=n;i++)
//	{for(j=2;j<i;j++)
//	
//	{
//		printf("%d%d",*(*(p+i)+j));
//		}
//		putchar('\n');	
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
//}


#include<stdio.h>
#include<string.h>
 
 
 int main()
 {void step(char [],int ,int );
 	int i,j;
 	char a[100000]={0};
 	scanf("%d%d\n",&i,&j);
 	gets(a);
// 	for(k=0;k<i;k++)
// 	scanf("%s",a[k]);
 	step(a,i,j);
 	
 	
 	
 	} 
 	void step(char a[],int d,int f)
 	{  int l=strlen(a);
 		while(d<l)
 		{
 		  printf("%c",a[d]);
 		  d+=f;
 			
			 
			 
			 
			  
 			
 			
 			
		 }
 		
 	
	 }
