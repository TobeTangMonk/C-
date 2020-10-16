#include<stdio.h>
int main()
{
	void swap(int *p1,float *p2);
	printf("please enter two number:");
	int a;
	float b; 
	p1=&a;
	p2=&b;
	scanf("%d %f",&a,&b);
	
       if(a>b)  swap(a,b);
	  printf("max=%d min=%f",a,b);
	return 0; 
 } 
 	void swap(int *p1,float *p2)
 	{   int temp;
 	temp=*p1;
 	*p1=*p2;
 	*p2=temp;
 	
 		
	 }
