#include<stdio.h>
#include<math.h>
int main()
{
	int isprime(int a);
	int a;
	printf("������һ��������");
	 scanf("%d",&a);
	 insprime();
	 return 1;
}
	int isprime(int a)
	{
		int i;
		for(i=2;i<sqrt(a);i++)
		{
				if(a%i==0)
				{
					return 0;
					break;
				}
		}
		return 1;
	
		
	}
 
