#include<stdio.h>
#include"string.h"

typedef struct student
{
	int age;
	char name[20];
}student,*pst;
int main()
{  
pst stu;
 
//	int a[]={1,2,3,4,5};
//	printf("%p\n",a);
//	printf("%d\n",*a);
input(&stu);
output(stu);
}

 intput(pst stu)
 {
 	stu->age=20;
 	strcpy(stu->name,"ÕÅÈı"); 
 }
 output( student stu)
 {
 	printf("%d%s\n",stu.age,stu.name);
 }
