//#include<stdio.h>
//#define SIZE 10 
//struct type
//{
//	int num;
//	char name[20];
//	char addr[20];
//	int age;
//}stu[SIZE];  //����ȫ������ѧ���ĸ���10�� 
//
//
//void save()
//{
//	int i;
//	FILE *fp;  // �ȴ��ļ���д�� 
//	if((fp=fopen("D:\\string.dat","wb"))==NULL)
//	{
//		printf("can not open the file:");
//		
//	}// �ļ�·���Ѷ�  
//	
//	 
//	for(i=0;i<SIZE;i++)
//	{
//		if(fwrite(&stu[i],sizeof(struct type),1,fp)!=1)
//		printf("file write error \n");
//		fclose(fp); 
//	 } 
//}
//int main()
//{int i;
//printf("please input date of students:\n");
//   for(i=0;i<SIZE;i++)
//scanf("%d%s%s%d",&stu[i].num,stu[i].name,stu[i].addr,&stu[i].age);
//save();
//return 0;
//
// } 
// #include<stdio.h>
// #include<stdlib.h>
// #indefine SIZE 10 
// struct type{
// 	char name[10];
// 	int num;
// 	int age;
// 	char addr[15];
// 	
// }stu[SIZE];
// int main()
// {
// 	FILE *fp;
// 	int i;
// 	for(i=0;i<SIZE;i++)
// 	{
// 		fread(&stu[i],sizeof(struct type),1,fp);
// 		printf("%d%d%d%s",stu[i].num,stu[i].name,stud[i].addr);
// 		
//	 }
//	 fclose(fp);
//	 return 0;
// 	
// }
#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	int count;
}leader[3]={"li","zh","n"};//�����ѡ�˿���ֱ�Ӽ��ϵȺ� 


int main()
{
	int i;
	for(i=0;i<10;i++)
	scanf("%s",leader[i].name);
	
	int j;//���ڼ���ͶƱ��
	for(j=0;j<3;j++)
	{
		if(strcmp(leader[j].name,leader[i].name)==0)  leader[i].count++;
	 } 
	 
	 printf("\n Result :\n");
	 for(i=0;i<3;i++)
	 printf("%s",leader[i].count);
	
}
