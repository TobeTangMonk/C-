//#include<stdio.h>
//#include<stdlib.h>
//#define LEN sizeof(struct student)
//
//struct student
//{   long num;
//float score;
//struct student *next;
//	
// } ;
// int n;
// struct student *creat(void)
// {
// 	struct student *head,*p1,*p2;
// 	n=0;
// 	p1=p2=(struct student *)malloc (LEN);
// 	scanf("%d%f",&p1->num,&p1->score);
// 	head=NULL;
// 	while(p1->num!=0)
// 	{
// 		n=n+1;
// 		if(n==1)head=p1;
// 		else p2->next=p1;
// 		p2=p1;
// 		p1=p2=(struct strudent *)malloc(LEN);
// 		scanf("%d%f",&p1->num,&p1->score);
//	 }
//	  p2->next=NULL;
//	  return (head);
// }
// int main()
// {
// 	struct student *pt;
// 	pt=creat();
// 	printf("\n:%d\nscore:%.5f\n",pt->num,pt->score);
// 	return 0;
//}
//#include<stdio.h>
//#include<malloc.h>
//#define LEN sizeof(struct student)
//
//
//struct student
//{
//	long num;
//	float score;
//	struct student *next;
//};
//int n;
//struct student *creat()
//{
//	struct student *head,*p1,*p2;
//	n=0;
//	p1=p2=(struct student*)malloc(LEN);
//	scanf("%d,%f",&p1->num,&p1->score);
//	head=NULL;
//	
//	while(p1->num)
//	{
//		n=n+1;
//		if(n==1) head=p1;
//		else 
//		p2->next=p1;
//		p2=p2;
//		p1=(struct student*)malloc(LEN);
//		scanf("%d,%f",&p1->num,&p1->score);
//	}
//	p2->next=NULL;
//	return (head);
//	
//	
//	
//}
//void print(struct student head)
//{
//	struct student *p;
//	printf("\nNOW ,these %d records are:\n",n);
//	p=head;
//	if(head!=NULL)
//	{ 
//		do 
//		{
//			printf("%d,%f",p->num,p->score);
//			p=p->next;
//			
//		}while(p!=NULL);
//	}
//}
//int main()
//{
//	struct student *pt;
//	pt=creat();
//	void print(pt);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{void input();
//void print();
//printf("%s,%d%s%s%d",print());
//	
//}
//struct student
//{
//	char name[30];
//	int num;
//	char sex[2];
//	union
//	{
//		int clas;
//		char position[10];
//	}category;
//}person[2];
//
//void input()
//{int i;
//for(i=0;i<=size;i++)
//scanf("%s%d%s")
//
//
//
//
//
//
//
//	
//}
































//#include<stdio.h>
//#define format "%d%s%d%c"
//struct student
//{
//	char name[20];
//	int num;
//	int age;
//	char sex;
//}stu[4];
//int main()
//{
//	void input(struct student stu[]);
//	 
//	int i;
//     input(stu);
//	for(i=0;i<4;i++)
//	{
//		prinntf(format,stu[i].num,stu[i].num,stu[i].age,stu[i].sex);
//		
//	 } 
//}
//void input (struct student stu[])
//{
//int i;
//for(i=0;i<4;i++)
//{
//	scanf(format,&stu[i].num,&stu[i].age,stu[i].name,&stu[i].sex);
//	}	
//}
//#include<stdio.h>
//
//union disa
//{
//		short int a;
//		char b[2];
//	};
//
//int main()
//{
//	
//	
//	union disa num;
//	pritnf("please enter a integer:");
//	scanf("%d",&num.a);
//	printf("b[0]\tb[1]\n");
//	printf("%d\t%d\n",num.b[0],num.b[1]);
//	
//}
#include<stdio.h>
struct student
{
	int num;
	char name[20];
};
struct student stu[3]={{101,"Lin linn"},{1022,"nime"},1922,{"houzi"}};
int main()
{
	struct student *p;
	for(p=stu;p<stu+3;p++)
	printf("d%s",p->num,p->name);
	}

