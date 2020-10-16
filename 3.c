#include<stdio.h>
#define Q 10
#define M 5

	float score[Q][M];
	float aver[M];
	float course aver[M];
	int n,c;
	float high;
	int high;
	int main
	{
		void input();
		void aver stu();
		void aver cour ();
		float highest();
		float s var();
		int i,j;
		intput();
		aver stu();
		aver cour();
		highest(); 
	}
	void input
	{
		int i,j;
		for(i=0;i<Q;i++)
		for(j=0;j<=M;j++)
		scanf("%f";&score[i][j]);
		
	}
	voed aver stu()
	{
		int i,j;
		float s=0;
		for(i=0;i<Q;i++)
		s+=score[i][j];
		aver[i]=sum/M;
	 
	}
	void aver cour()
	{
		int i,j;
		float s=0;
		for(i=0;i<Q;i++)
		{
			sum=0;
			for(j=0;j<M;j++)
			s=score[j][i];
			course aver[i]=s/M;
		}
		float highest
		{
			int i,j;
			high=score[0][0];
			n=c=0;
			for(i=0;i<Q;i++)
			{
				for(j=0;j<M;j++)
				if(high<score[i][j])
				{
					high=score[i][j];
					n=i;
					c=j;
				}
			}
		}
		  float s var()
		  {
		  	int i;
		  	float sumx=0;sumxn=0;
		  	for(i=0;i<Q;i++)
		  	{
		  		sumx+=aver[i]*aver[i];
		  		sumxn+j=aver[i];
			  }
			  return =sumx/Q-(sumn/Q);
		  	
		  }

