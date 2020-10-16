#include<stdio.h>
int main()
{
	
	int i,sum=0;
	i=1;
	while(i<=500)
    {
    	if(i%3==0|i%5==0) sum=sum+i;
    	i++;
		}	printf("sum=%d\n",sum);
		return 0;
}
