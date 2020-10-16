#include<stdio.h>
int main()
{
  int i;
  float a,b,f,m;
  
  i=5.48;
  f=23;
  a=i/2.0;
  b=(int)(i/2.0);
  m=12345678639.456217896;
  printf("%d/n",i);
  printf("%f,%f\n",a,b);
  printf("%f,%f\n,",f,m);
  
  return 0;
}
