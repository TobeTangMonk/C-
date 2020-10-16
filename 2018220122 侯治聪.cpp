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
//// 初始化顺序线性表
//int Initlist(sqlist *&L)
//{
//  L=(sqlist *)malloc (sizeof(sqlist));
//  L->length=0;
// } 
// void DestoryList(sqlist *&L)
// {
// 	free(L);
// }
// //初始化线性表已经存在
// //操作结果将L重置为空表
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
//  //初始化条件：顺序线性表L已经存在。操作结果
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
//   //初始条件：
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
////	printf("顺序表的基本运算如下：\n");
//	printf("(1)初始化顺序表L\n");
//	InitList(L);
//	ListInsert(L,1,'a');
//	ListInsert(L,2,'b');
//	ListInsert(L,3,'c');
//	ListInsert(L,4,'c');
//	ListInsert(L,5,'d');
//	printf("输出顺序表L:");
//	DistpList(L);
//	printf("顺序表的长度为：%d\n",Listlength(L));
//	if(ListEmpty(L)==1)
//	printf("(5)线性表为空！\n");
//	else
// printf("(5)线性表为非空！\n");
// GetElem(L,3,&e);
// printf("(6)顺序表L的第三个元素为：%c\n",e);
//  printf("(7)元素a的位置：%d\n",LocateElem('L',a));
//  
//  printf("(8)第四个元素位置上插入f元素\n",e);
//  ListInsert(L,4,'f');
//  printf("输出顺序表");
//  DispList(L);
//  printf("(9)删除L的第三个元素\n");
//  
//  ListDelete(L,3,&e);
//  
//  
//  printf("删除的元素为：%c\n");
//   printf("输出顺序表");
//  DispList(L);
//  
//  printf("(10)释放顺序列表L\n");
//  DestoryList(L);
//  return 0;
//  
//  
// } 
// 
//#include<stdio.h>
//#include<malloc.h>
//#define maxsize 50
//typedef int Elemtype;// 线性表元素类型为int 类型
//typedef struct
//{
//	Elemtype data[maxsize];
//	int length;
//	
// }sqlist;
// //初始化线性表
// InlitList(sqlist *&L)
// {
// 	L=(sqlist *)malloc(sizeof(sqlist));
// 	L->length=0;
// }
// //初始条件：顺序线性表已经存在
// //操作结果：在L中第i个位置之前插入新元素e,L的长度加1
//  
//  Listinsert(slist *&L,int i;Elemtype e)
//  {
//  	int j;
//  	if(L->length==maxsize)//线性表已满
//	  return;
//	  if(i<1||i>L->length+1)
//	  return ;
//	  i--;
//	  for(j=L->length;j>i;j--)
//	   L->data[j]=L->data[j-1];
//	   L->data[i]=e;//将元素插入第i个位置 
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
// 	printf("交换之后的结果：\n");
// 	partition1(L);
// 	DispList1(L);
// 	
// 	return 0;
// 	
// 	} 
#include<stdio.h>
#include<malloc.h>
Typedef char Elemtype //定义元素为char类型
Typedef struct Linklist
{
	Elemtype data;
	struct Linklist *next;
 }Linklist;
 void Inistlist(Linklist *&L)
 {  Linklist *L;
 	L=(Linklist *)malloc(sizeof(Linklist));//动态分配存储空间
	 if(!L)//存储分配失败 
	 return; 
 	L->next=NULL;//指针域为空 
 }
 
 void DestoryList(Linklist *&L)
 {
 	Linklist *L,*p,*q;
 	
 	
 	p=L->next;//p指向第一个节点 
	 while(p)
	 {
	 	q=p->next;
	 	free(p);
	 	p=q;
	  }
	  L->next=NUll; //头结点的指针域为空 
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
   
   //求长度返回元素的个数
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
    }//查找元素的函数
     
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
    	L->next=NULL;//建立一个空的链表
	    for(i=0;i<n;i++)
	    {
	    	p=(Linklist *)malloc(sizeof(Linklist));
	    	printf("please input i+1 %dthis member\n",i+1);
	    	scanf("%d",&(p->data));
	    	p->next=L->next;
	    	L->next=p;// 指针指向p节点，使p为表头 
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
	    	printf("%d数\n",i+1);
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
   printf("单链的基本运算如下：\n");
   printf("(1)初始化单链表h:\n");
   Initlist(h);
   printf("(2)依次插入a,b,c,d,e元素\n");
   Listinsert(h,1,'a'); 
   Listinsert(h,2,'b');
   Listinsert(h,3,'c');
   Listinsert(h,4,'d');
   
   Listinsert(h,5,'e');
   printf("输出单链表h:\n");
   Displist(h);
    printf("(4)输出单链表h的长度为:\n",Listlength(h));
   printf("(5)单链表h:\n");
   
   
   if(ListEmpty(h))
   printf("非空\n");
   else
   
   printf("空\n");
  GetElem(h,3,&e);
  printf("(6)单链表h的第三个元素为:\n");
   printf("(7)元素的位置%d\n",LocateElem(h,'a'));
   	printf("(8)在第四个元素位置上插入f元素:\n");
   	
   	Listinsert(h,4,'f');
	   Displist(h);
	   
	   printf("删除单链表h的第三个元素\n");
	   
	   ListDelete(h,3,&e);
	   Displist(h);
	   printf("删除的元素为：%c\n",e);
	   printf("(10)释放单链表h\n");
	   Destorylist(h);
	   
	   Createlisthead(h,10);
	   Displist(h);
	   
	   Destorylist(h);
	   Createlistail(h,10);
	   Displist(h);
	   Destorylist(h);
	   
	   return 0;
   	
   	
 } 



