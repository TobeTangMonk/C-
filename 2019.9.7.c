/*#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	printf("%p",a);
	printf("%d",a);
	printf("20ÀÍ…˙»’øÏ¿÷");
	printf("the life is always sorrow");
	printf("\t\tthe world is too big,so I want to look arond it");
	printf("everyone not have the neccesssory freedom,even the birds");
	printf("");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	printf("the life is always sorrow");
	
	
	
	
}*/
//#include<stdio.h>
//struct student
//{
//	char name[10];
//	char sex[2];
//	float score;
//	
//	}stu[10];
//int main()
//{  float sum=0;
//   float ave;
//   int i;
//   for(i=0;i<10;i++)
//   scanf("%s\n%s\n%f\n",stu[i].name,&stu[i].sex,&stu[i].score);
//	sum+=stu[i].score;
//	for(i=0;i<10;i++)
//   printf("%s\n%s\n%f\n",stu[i].name,stu[i].sex,stu[i].score);  
//   ave=sum/10;
//   printf("%f\n",ave);
//   for(i=0;i<=9;i++)
//   {
//   	if(stu[i].score>ave)
//   	printf("%.2f",stu[i].score); 
//   }
//   
  
//  #include<stdio.h>
//  #include<malloc.h>
//  struct student
//  {
//  	char name[10];
//  	char sex[2];
//  	float score;
//  	
//  }*stu,*ps;
//  
//  int main()
//  {int n=0;
//
//  float ave=0,sum=0;
//  printf("please input a number n:");
//  scanf("%d",&n);
//  int i=0;
//  stu=(struct student *)malloc(sizeof(struct student)*n); 
//  for(i=0;ps=stu;i<n,i++,ps++)
//  scanf("%s%s%f",ps->name,ps->sex,&ps->score);
//  
//  sum+=ps->score;
//  ave=sum/10;
//  for(i=0;ps=stu;i<n,i++,ps++)
//  {if(ps->score>ave)
//  printf("%f",ps->name,ps->sex,ps->score);
//  }
//  if(ps->score>ave)
//  printf("%f",ps->name,ps->sex,ps->score);
//  for(i=0;ps=stu,i<n;i++,ps++)
//  {printf("%s%s%f",ps->name,ps->sex,ps->score);
//  
//  }
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//}  
// 
//#include<stdio.h>
//int main()
//{
//  int b,a;
//  
// char **p=&a;
//    //a==*p
//    printf("%p %p %p %p \n%p\n",&a,p,a,*p,&b);
//    printf("%s\n",*p);
//    p++;
//    printf("%d\n",*p);
//    p++;
//    printf("%d\n",*p);
//    p++;
//    printf("%c\n",*p);
//    return;
//}
// 
//  
//  
  
 #include <stdio.h>
void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
          insertion_sort(arr,len);          //bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
} 	
void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1;i<len;i++){
            temp = arr[i];
            for (j=i;j>0 && arr[j-1]>temp;j--)
                    arr[j] = arr[j-1];
            arr[j] = temp;
    }
}
