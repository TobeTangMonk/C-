#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fp;
	char str[3][10],temp[10];
	int i,j,k,n=3;
	printf("�������ַ�����");
	for(i=0;i<n-1;i++)
	gets(str[i]);
	{k=i;
	for(j=i+1;j<n-1;j++)
	if(strcmp(str[k],str[j])>0)k=j;
	if(k!=i)
	{
		strcpy(temp,str[i]);
		strcpy(str[i],str[k]);
		strcpy(str[k],temp);
	}
	 } 
	 if((fp=fopen("D:\\CC\\string.dat","w"))==NULL)
	 {
	 	printf("can not open file!\n");
	 	exit(0);
	 }
}
printf("\nthe new sequence:\n");
for(i=0;i<n;i++)
{
	fputs(str[i],fp);fputs("\n",fp);
	printf("%s\n",str[i]);
	return 0;
 } 

 

 
