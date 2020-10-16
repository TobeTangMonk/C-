#include<stdio.h>
struct student 
{
	int num;
	float score;
	struct student *next;
};
int main()
{
	struct student a,b,c,*head,*p;//定义三个结构体变量啊ab,c作为链表的结点 
	
	a.num=1;a.score=89.5;
     b.num=1234;a.score=89.9;
	c.num=23553;a.score=99.9;
	head=&a;
	b.next=&c;
	c.next=NULL;
	p=head;   //是p指向终点 
	do{
		printf("%3d %4f\n",p->num,p->score);//shu rudi yi ge jie dian shu ju
		p=p->next;
		
	}  while(p!=NULL);
	return 0;
   }
