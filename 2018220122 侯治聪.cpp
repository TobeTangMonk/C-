//#include<stdio.h>
//#include<malloc.h>
//#define MAXSIZE 50
//typedef int  ElemType
//typedef struct
//{
//	 data[MAXSIZE];
//	int length;
//}sqlist;
//
//// ��ʼ��˳�����Ա�
//int Initlist(sqlist *&L)
//{
//  L=(sqlist *)malloc (sizeof(sqlist));
//  L->length=0;
// } 
// void DestoryList(sqlist *&L)
// {
// 	free(L);
// }
// //��ʼ�����Ա��Ѿ�����
// //���������L����Ϊ�ձ�
// void ClearList(sqlist *&L)
// {
// 	L->length=0;
//  } 
//  int  ListEmpty(sqlist *L)
//  {
//  	if(L->length==0)
//  	return 1;
//  	else
//  	return 0;
//  }
//  //��ʼ��������˳�����Ա�L�Ѿ����ڡ��������
//  
//  
//  int Listlength(sqlist *L)
//  {
//  	return L->length;
//   } 
//   void GetElem(sqlist *L,int i,ElemType *e)
//   {
//   	if(L->length==0||i<1||i>L->length)
//   	return;
//   	*e=L->data[i-1];
//   }
//   //��ʼ������
//   int ListInsert(sqlist *&L,int i,ElemType e)
//   {
//   	int j;
//   	if(L->length==MAXSIZE)
//   	return;
//   	if(i<1||i>L->length+1)
//   	i--;
//   	for(j=L->length;j>i;j--)
//   	L->data[j]=L->data[j-1];
//   	L->length++;
//    } 
//    void ListDelete(sqlist *&L,int i,ElemType *e)
//    {
//    	int j;
//    	if(L->length==0)
//    	return;
//    	if(i<1||i>L->length+1)
//    	return;
//    	i--;
//    	*e=L->data[i];
//    	for(j=i;j<L->length-1;j++)
//    	L->data[j]=L->data[j+1];
//    	L->length--;
//    }
//    void DispList(sqlist *L)
//    {
//    	int i;
//    	for(i=0;i<L->length;i++)
//    	{
//    		printf("%c",L->data[i]);
//    		
//	    }
//	    printf("\n");
//    }
//    
//int main()
//
//{
//	sqlist *L;
//	ElemType e;
////	printf("˳���Ļ����������£�\n");
//	printf("(1)��ʼ��˳���L\n");
//	InitList(L);
//	ListInsert(L,1,'a');
//	ListInsert(L,2,'b');
//	ListInsert(L,3,'c');
//	ListInsert(L,4,'c');
//	ListInsert(L,5,'d');
//	printf("���˳���L:");
//	DistpList(L);
//	printf("˳���ĳ���Ϊ��%d\n",Listlength(L));
//	if(ListEmpty(L)==1)
//	printf("(5)���Ա�Ϊ�գ�\n");
//	else
// printf("(5)���Ա�Ϊ�ǿգ�\n");
// GetElem(L,3,&e);
// printf("(6)˳���L�ĵ�����Ԫ��Ϊ��%c\n",e);
//  printf("(7)Ԫ��a��λ�ã�%d\n",LocateElem('L',a));
//  
//  printf("(8)���ĸ�Ԫ��λ���ϲ���fԪ��\n",e);
//  ListInsert(L,4,'f');
//  printf("���˳���");
//  DispList(L);
//  printf("(9)ɾ��L�ĵ�����Ԫ��\n");
//  
//  ListDelete(L,3,&e);
//  
//  
//  printf("ɾ����Ԫ��Ϊ��%c\n");
//   printf("���˳���");
//  DispList(L);
//  
//  printf("(10)�ͷ�˳���б�L\n");
//  DestoryList(L);
//  return 0;
//  
//  
// } 
// 
//#include<stdio.h>
//#include<malloc.h>
//#define maxsize 50
//typedef int Elemtype;// ���Ա�Ԫ������Ϊint ����
//typedef struct
//{
//	Elemtype data[maxsize];
//	int length;
//	
// }sqlist;
// //��ʼ�����Ա�
// InlitList(sqlist *&L)
// {
// 	L=(sqlist *)malloc(sizeof(sqlist));
// 	L->length=0;
// }
// //��ʼ������˳�����Ա��Ѿ�����
// //�����������L�е�i��λ��֮ǰ������Ԫ��e,L�ĳ��ȼ�1
//  
//  Listinsert(slist *&L,int i;Elemtype e)
//  {
//  	int j;
//  	if(L->length==maxsize)//���Ա�����
//	  return;
//	  if(i<1||i>L->length+1)
//	  return ;
//	  i--;
//	  for(j=L->length;j>i;j--)
//	   L->data[j]=L->data[j-1];
//	   L->data[i]=e;//��Ԫ�ز����i��λ�� 
//	   L->length++;
//  }
//  
//  void DispList(sqlist *L)
//  {
//  	int i;
//  	for(i=0;i<L->length;i++)
//  	{
//  		printf("%d",L->data[i]);
//	  }
//	  printf("\n");
//   } 
//   void swap(int *x,int *y)
//   {
//   	int t;
//   	t=*x;
//   	*x=*y;
//   	*y=t;
//   }
//   void partition1(sqlist *&L)
//   {
//   	int i=0,j=L->length-1;
//   	Elemtype pivot=L->data[0];
//   	while(i<j)
//   	{
//   		while(i<j&&L->data[j]>pivot)
//   		j--;
//   		while(i<j&&L->data[i]=pivot)
//   		i++;
//   		if(i<j)
//   		swap(&L->data[i],&L->data[j]);
//	   }
//	   swap(&L->data[0],&L- >data[i]);
//   }
//   void Partition2(sqlist *L)
//   {
//   	int i=0,j=L->length-1;
//   	Elemtype pivot=L->data[0];
//   	while(i<j)
//   	{
//   		while(i<j&&L->data[j]>pivot)
//   		j--;
//   		while(i<j&&L->data[j]<=pivot)
//   		i++;
//   		if(i<j)
//   		swap(&L->data[i],&L->data[j);
//   		
//   		
//	   }
//	   swap(&L->data[0],&L->data[i);
//   }
//   
//   
//   int main()
// {  sqlist *L; 
// 	InlitList(L);
// 	int Listinsert(*L,int i;Elemtype *e);
// 	Listinsert(L,7,3);
// 	Listinsert(L,8,5);
// 	Listinsert(L,9,6);
// 	Listinsert(L,10,10);
// 	Listinsert(L,11,11);
// 	Listinsert(L,12,12);
// 	Listinsert(L,13,13);
// 	Listinsert(L,14,15);
// 	Listinsert(L,15,18);
// 	Listinsert(L,16,19);
// 	DispList(L);
// 	printf("����֮��Ľ����\n");
// 	partition1(L);
// 	DispList1(L);
// 	
// 	return 0;
// 	
// 	} 
#include<stdio.h>
#include<malloc.h>
Typedef char Elemtype //����Ԫ��Ϊchar����
Typedef struct Linklist
{
	Elemtype data;
	struct Linklist *next;
 }Linklist;
 void Inistlist(Linklist *&L)
 {  Linklist *L;
 	L=(Linklist *)malloc(sizeof(Linklist));//��̬����洢�ռ�
	 if(!L)//�洢����ʧ�� 
	 return; 
 	L->next=NULL;//ָ����Ϊ�� 
 }
 
 void DestoryList(Linklist *&L)
 {
 	Linklist *L,*p,*q;
 	
 	
 	p=L->next;//pָ���һ���ڵ� 
	 while(p)
	 {
	 	q=p->next;
	 	free(p);
	 	p=q;
	  }
	  L->next=NUll; //ͷ����ָ����Ϊ�� 
  } 
  int LinklistEmpty(Linklist *L)
  {
  	if(L->next)
  	return 1;
  	else 
  	return 0;
   } 
   
   int Listlength(LinkList *L)
   {
   	int i=0;
   	Linklist *p=L->next;
   	while(p)
   	{
   		i++;
   		p=p->next;
	   }
	   return i;
   }
   
   //�󳤶ȷ���Ԫ�صĸ���
   void GetElem(Linklist *L,int i,Elemtype *e) 
    {
    	int j;
    	Linklist *p;
    	p=L->next;
    	j=1;
    	while(p&&j<i)
    	{
    		p=p->next;
    		j++;
	    }
	    if(!p&&j>i)
	    return;
	    *e=p->data;
    }//����Ԫ�صĺ���
     
   LocateElem(Linklist *L,Elemtype e)
   {
   	int i=0;
   	Linklist *p=L->next;
   	while(p)
	   {
	   	i++;
	   	if(p->data==e)
	   	return i;
	   	p=p->next;
	    } 
	    return 0;
    } 
    void DispList(Linklist *L)
    { Linklist *p=L->next;
    while(p)
    {
    
    
    printf("%c",p->data);
    p=p->next;
    }
    printf("\n");
    	
    }
    void Listinsert(Linklist *&L,int i,Elemtype e)
    {
    	int j;
    	Linklist *p,*s;
    	p=L;
    	j=1;
    	while(p&&j<i)
	    {
	    	p=p->next;
	    	++j
		} 
		if(!p||j>i)
		return;
		s=(Linklist *)malloc(sizeof(Linklist));
		s->data=e;
		s->next=p->next;
		p->next=s;
    }
    
    void ListDelete(Linklist *&L,int i,Elemtype *e)
    {
    	int j;
    	Linklist *p,*q;
    	p=L;
    	j=1;
    	while(p->next &&j<i)
    	{
    		p=p->next;
    		++j;
	    }
	    if(!(p->next)||j>i)
	    return ;
	    q=p->next;
	    p->next=q->next;
	    *e=q->data;
	    free(q);
    }
    void Greatelisthead(Linklist *&L,int n)
    {
    	Linklist *p;
    	int i;
    	L=(Linklist *)malloc(sizeof(Linklist));
    	L->next=NULL;//����һ���յ�����
	    for(i=0;i<n;i++)
	    {
	    	p=(Linklist *)malloc(sizeof(Linklist));
	    	printf("please input i+1 %dthis member\n",i+1);
	    	scanf("%d",&(p->data));
	    	p->next=L->next;
	    	L->next=p;// ָ��ָ��p�ڵ㣬ʹpΪ��ͷ 
		} 
    }
    
    void CreateListTail(Linklist *&L,int n)
    {
    	Linklist *p,*r;
    	int i;
    	L=(Linklist *)malloc(sizeof(Linklist));
    	r=L;
    	for(i=0;i<n;i++)
	    {
	    	p=(Linklist *)malloc(sizeof(Linklist));
	    	printf("%d��\n",i+1);
	    	scanf("%d",&(p->data));
	    	r->next=p;
	    	r=p;
		} 
		r->next=NULL;
	} 
	
int main()
{
   Linklist *h;
   ElemType e;
   printf("�����Ļ����������£�\n");
   printf("(1)��ʼ��������h:\n");
   Initlist(h);
   printf("(2)���β���a,b,c,d,eԪ��\n");
   Listinsert(h,1,'a'); 
   Listinsert(h,2,'b');
   Listinsert(h,3,'c');
   Listinsert(h,4,'d');
   
   Listinsert(h,5,'e');
   printf("���������h:\n");
   Displist(h);
    printf("(4)���������h�ĳ���Ϊ:\n",Listlength(h));
   printf("(5)������h:\n");
   
   
   if(ListEmpty(h))
   printf("�ǿ�\n");
   else
   
   printf("��\n");
  GetElem(h,3,&e);
  printf("(6)������h�ĵ�����Ԫ��Ϊ:\n");
   printf("(7)Ԫ�ص�λ��%d\n",LocateElem(h,'a'));
   	printf("(8)�ڵ��ĸ�Ԫ��λ���ϲ���fԪ��:\n");
   	
   	Listinsert(h,4,'f');
	   Displist(h);
	   
	   printf("ɾ��������h�ĵ�����Ԫ��\n");
	   
	   ListDelete(h,3,&e);
	   Displist(h);
	   printf("ɾ����Ԫ��Ϊ��%c\n",e);
	   printf("(10)�ͷŵ�����h\n");
	   Destorylist(h);
	   
	   Createlisthead(h,10);
	   Displist(h);
	   
	   Destorylist(h);
	   Createlistail(h,10);
	   Displist(h);
	   Destorylist(h);
	   
	   return 0;
   	
   	
 } 



