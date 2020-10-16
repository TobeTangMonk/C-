/*#include<stdio.h>
int main()
{
	void copy(char from[],char to[]);
	char a[]="I am a student";
	char b[]="I am a teacher";
    int i;
printf("copy string a\nto string b\n");
for(i=0;i<8;i++)
scanf("%c",a[i]);
printf("%c",a[i]);
copy(a,b);
printf("%c",b[i]);
return 0;
}  
void copy(char from[],char to[])
{
	
}*/ 
#include<stdio.h>
struct 
{
	int num; //成员编号
	char name[20];
	char sex;
	char job;
	union
	{
		int clas;
		char position[10];
	 } category;
}person[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
	  printf("请输入数据：\n");
	  scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].job,&person[i].sex);
	  if(person[i].job=='s')//如果是学生，输入班级	
	  scanf("%d",&person[i].category.clas);
	  else if(person[i].job=='t')//如果输入的数据是老师
	  scanf("%s",person[i].category.position);
	  else 
	   printf("Input error");
	   printf("\n");
	   
	   printf("NO.  name  sex job class/position\n");
	   for(i=0;i<2;i++)
	   {
	   	if(person[i].job=='s')
	   	printf("%-6d%-10s%-4d%-4c%-10d%\n,person[i].num,person[i].name,person[i].sex,pweson[i],category,person[i].job");
	   	else
	   	printf("%-6d%-10s%-4c%-4c%-10s\n",person[i].num,person[i].job,person[i].name,person[i].sex,person[i].category.position);
	}
	return 0;
	   }
}

