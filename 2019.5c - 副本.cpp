#include<stdio.h>
int main()
{
  int a[15]={1,3,4,6,7,8,10,20,23,29};
  int i,k;
  
  int  low=0, high=14,mid;
  scanf("%d",&k);
  while(low<=high)
  {
  	mid=(low+high)/2;
	  if(k==a[mid])
	  {
	  	printf("%d",mid+1);
	  	return 0;
	   } 
  }
  
  else (k>a[mid])
  low=mid+1;
  else
  high=mid-1;	
}
printf("ÎÞ´ËÊý")£»
 
return 0;
} 
