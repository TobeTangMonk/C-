#include<stdio.h>
#include<math.h>
int main()
{
	
	int i,j,k;
	for(i=40;i<119;i++)
	{
	k=i*(i+1)-1;
	for(j=2;j<=sqrt(k);j++)
	if(!(k%j))
             break;
             if(j>sqrt(k))
             printf("%d%d\n",i,i+1);
		   }
		   return 0;
	}
