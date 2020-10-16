#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
	void convert(char s[]);
	char s[N];
	gets(s);
	convert(s);
	puts(s);
	return 0;
}
 void convert(char s[])
 {
 	int i,len;
 	char c;
 	len=strlen(s);
 	for(i=0;i<len/2;i++)
 	{
 		c=s[i];
 		s[i]=s[len-i-1];
 		s[len-i-1]=c;
	 }
 }
