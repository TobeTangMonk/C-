#include<stdio.h>
#include<math.h>
int main()
{
	
	int a,b,sum=2699,t;
	int k=sqart(2698);
	for(a=1;a<=k;a++)
	for(b=k;b<=2698;b++)
	if(a*b==2698)
	if(sum>a+b)
	{
		sum=a+b;
		t=b;
	}
  printf("%d",t);
  return 0;
}

