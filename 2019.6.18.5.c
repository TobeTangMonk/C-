#include<stdio.h>
struct student 
{
	int num;
	float score;
	struct student *next;
};
int main()
{
	struct student a,b,c,*head,*p;//���������ṹ�������ab,c��Ϊ����Ľ�� 
	
	a.num=1;a.score=89.5;
     b.num=1234;a.score=89.9;
	c.num=23553;a.score=99.9;
	head=&a;
	b.next=&c;
	c.next=NULL;
	p=head;   //��pָ���յ� 
	do{
		printf("%3d %4f\n",p->num,p->score);//shu rudi yi ge jie dian shu ju
		p=p->next;
		
	}  while(p!=NULL);
	return 0;
   }
