#include<stdio.h>
#define N 13
struct person{
	int num;
	int next;
	
}per[N+1];
  
  int main()
  {
  	int i,h,count;
  	for(i=1;i<=N;i++)
	  {
	  	per[i].number=i;
	  	if(i==N)
	  	per[i].next=1;
	  	else
	  	per[i].next=i+1;
	  	
	   } 
  }
  count=0;
  h=N;
  while(i!=3)
  {
  	i=0;
  	while(i!=3)
  	{
  		h=per[h].next;
  		if(per[h].number)

	 i++;
	  }
	  per[h].number=0;
	  count++;
  }
  for(i=1;i<N;i++)
  if(per[i].number)
  printf("%d",per[i].number);
     return 0;

