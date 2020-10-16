//#include<stdio.h>
//int main()
//{
//	  int a[10]={3,4,5,7,1},i;
//	  void temp1(int x[],int n); // 用temp1函数进行交换
//	  printf("the orignal array:\n"); // 输入没交换的数组 
//	  for(i=0;i<=10;i++)
//	  printf("%d\t",a[i]);
//	  printf("\n");
//	  
//	   
//	  temp1(a,10);
//	  for(i=0;i<=10;i++)
//	  printf("%d\t",a[i]);
//	  printf("\n");     
//}
//void temp1(int x[],int n) // 交换元素的函数    
//{   
//    int temp,i,j,m=(n-1)/2;
//    for(i=0;i<=m;i++)
//    {
//    	j=n-1-i;
//    	temp=x[i];
//    	x[i]=x[j];
//    	x[j]=temp;
//    	
//	} 
//} 
//#include<stdio.h>
//int main()
//{    void intv(int *x,int n); //用指针函数来替换 
//
//	int i,a[5]={1,3,5,6,6};
//	for(i=0;i<=5;i++)
//	printf("%d\t",a[i]);
//	printf("\n");
//	intv(a,5);
//	 	for(i=0;i<=5;i++)
//	printf("%d\t",a[i]);      // 输出交换后的数组 
//	printf("\n");
// } 
// void intv(int *x,int n)
// {
//         int temp,*i,*j,*p,m=(n-1)/2;   // 用指针函数交换     
//	    i=x;
//	    j=x+n-1;
//	    p=x+m;
//	    for(;i<=p;i++,j--)
//	    {
//	    	temp=*i;
//	    	*i=*j;
//	    	*j=temp;
//	    	return 0;
//		} 
//	}
#include<stdio.h>
int main()
{
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",&a[0],&a[0][0]);
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a,*a);




//int a[3][4]={1,3,5,7,9,11};
//int (*p)[4],i,j;  // 指针变量p指向包含四个整型元素的一维数组
//p=a;
//printf("please input row and colum:"); 
////for(i=0;i<=3;i++)
////  for(j=0;j<=4;j++)
//  
//  scanf("%d%d",&i,&j);
//  printf("a[%d%d]=%dd\n",i,j,a[i][j]); 



void average(float *p,int n);
void search(float (*p),int n);
float score[3][4]={33,35,63,53};
average(*score,12);
search(score,2);
return 0;







 } 
 void average(float *p,int n)
 {
 	float *p_end;
 	float sum=0,aver;
 	p_end=p+n-1;
 	for(;p<=p_end;p++)
	 sum=sum+(*p);
	 aver=sum/n;
	 printf("average=%5.2f\n",aver);
 }
 void search(float (*p),int n)
 {
 	
 	
 	
 	
 }
 
 
