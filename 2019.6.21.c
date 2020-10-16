#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%f%f%f%f",&a,&b,&c);
	printf("the equation");
	if(fabs(a)<=le-6)
	printf("is not a quadratic\n");
	else
	{
		disc=b*b-4ac;
		if(fabs(disc)<=le-6)
		printf("has two equal roots\n");
     else
     if(disc>le-6)
     {
     	x1=(-b+sqrt(disc)/2*a);
     	x2=(-b-sqrt(disc)/2*a);
     	printf("has distinct real:%f and %8f\n",x1,x2);
	}
	else 
	{
		realpart=-b/2*a;
		imagpart=sqrt(disc)/2*a;
		printf("has complex roots:\n");
		printf("%f%f\n",repart,imagart);
		printf("%f-%f");reaplart,imagpart);
		
	}
	return 0;
	}
}
 
