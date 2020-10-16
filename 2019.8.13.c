//#include<stdio.h>
//int main()    
//{
//	int *p1,*p2;
//	int a=100,b=10;
//	p1=&a; //remeber the sign &
//	p2=&b;
//	printf("*p1=%d\n*p2=%d\n",*p1,*p2);
//	printf("a=%d\nb,b=%d\n",a,b);
//	return 0;
//	
//	
// } 
 #include<stdio.h>
 int main()
 {
 	int *p1,*p2,a,b;
 	printf("please input a, b:");
 	scanf("%d,%d",&a,&b);
 	p1=&a;
 	p2=&b;
 	if(a>b)
 	{p2=&b;p1=&a;
	  
 }
 printf("max=%d\n,min=%d\n",*p1,*p2);
 
 
}
