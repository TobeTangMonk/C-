#include<stdio.h>
int main()
{
	enum color{red,white,yellow,blue,black};
	enum color i,j,k,temp;
	
	int n,loop;
	for(i=1;i<5;i++)
	for(j=1;j<5;j++)
	{
		if(i!=j)
		{
		  for(k=1;k<5;k++)
		  if(k!=i && k!=j)
		  {
		  	n=n+1;
		  	printf("%-4d",n);
		  	for(loop=1;loop<3;loop++)\
		  	{switch(loop)
		  	{
		  		case 1:temp=i;break;//ba yi qiu de yan se chuan gei temp; 
		  		case 2:temp=j;break;
			     case 3:temp=k;break;
				default:break; 
			  }
			  switch(temp)
			  {
			  	case red:printf("%-10s","red");break;
			     case yellow:printf("%-10s","yellow");break;
			  	case blue:printf("%-10s","blue");break;
			  	case white:printf("%-10s","white");break;
			  	case black:printf("%-10s","black");break;
			  	default: break;
			  }
			  printf("\n");
			  } 
		   }                      
		   printf("\ntotal:%5d\n",n);
		   return 0;
	}


