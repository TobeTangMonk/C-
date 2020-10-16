#include<stdio.h>
void search(float (*p)[4],int n)
{
	int i,j,f;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<4;j++)
		if(*(*(p+i)+j)<60)
		f=1;
		if(f==1)
		for(j=0;j<4;j++)
		printf("%.1f",*(*(p+i)+j));
		}
		void ave(float *p,float n)
		{
			float sum=0,ave;
			float *q,*q_end=p+n-1;
			for(q=p;q<=q_end;q++)
			sum+=*q;
			ave=sum/n;
			printf("ave=%f\n",ave);
			
			
		}
		int main()
		{
			float a[3][4];
			int i,j;
			for(i=0;i<3;i++)
			
				for(j=0;j<4;j++)
				scanf("%f",&a[i][j]);
				
				ave(*a,12);
				search(a,3);
				return 0;
			}
		

