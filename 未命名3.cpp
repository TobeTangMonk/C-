#include<stdio.h>
#define size 10
struct student _type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[size];
void save()
{
	FILE*fp;
	int i;
	if((fp=fopen("stu.dat","wb"))=NULL)
	{
		printf("can not open file\n");
		return;
	}
	for(i=0;i<size;i++)
	if(fwrite(&stu[i],sizeof(struct student-type),1,fp)!=1)
	printf("file write error\n");
	fclose(fp);
}
int main()
{
	int i;
	printf("please enter data of students\n");
	for(i=0;i<size,i++)
	scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].num,&stu[i].age,stud[i].age,stud[i].addr);
	save();
	return 0;
}




