#include<stdio.h>
int main()
{
	char c;
	c=getchar();
	if(c>='a'&&c<='u')
	c=c+5;
	if(c>'v'&&c<='z')
	c=c-21;
	putchar(c);
	return 0;
}
