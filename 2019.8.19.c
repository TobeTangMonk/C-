//#include<stdio.h>
//#include<string.h>
//int main()
//{   int a[20];
//	void step(char a[],int ,int );
//	int i,j;
//	scanf("%d%d",&i,&j);
//	gets(a);
//
//     step(a,i,j);
// }
// void step(char a[],int d,int f)
// 
// {  int l;
// l=strlen(a);
// while(d<l)
// {
// 	printf("%c",a[d+1]);
// 	
// 	d+=f;
// }
// 
// 	
//  } 
//#include<stdio.h>
//char a[27][27];
//int main()
//{
//    int i,j,m,n;
//    a[1][1]='A';
//	scanf("%d%d",&m,&n);
//	for(i=1;i<=m;i++){
//	for(j=1;j<=n;j++){
//	   	if(i==1&&j>1)//针对第一行
//    {
//    	a[1][j]=a[1][j-1]+1;
//    }   
//    
//    
//     if(j==1&&i>1){
//     a[i][1]=a[i-1][1]+1;
//			  }
//           
//           
//           
//			if(i>1&&j>1)
//        a[i][j]=a[i-1][j-1];
//}
//    }
 
 
 
//	for(i=1;i<=m;i++){
//	for(j=1;j<=n;j++){
//		printf("%c",a[i][j]);
//	}
//	printf("\n");
//		}
//	return 0;
//}

 #include<stdio.h>
 char a[27][27];
 int main()
 {
 	int i,j,a[1][1]='A';
 	int m,n;
 	scanf("%d%d",&m,&n);
 	for(i=1;i<=m;i++)
 	{
 		for(j=1;j<=n;j++)
 		{
 			a[1][j]=a[1][j-1]+1;
		 }
	 }
	 
	 if(i==1&&j>1)
	 a[i][1]=a[i-1]+1;
	 if(i>1&&j>1)
	 a[i][j]=a[i-1][j-1];
	 
	 
	 
	 for(i=1;i<=m;i++)
 	{
 		for(j=1;j<=n;j++)
 		{
 			printf("%c",a[i][j]);
		 }
	 }
 	
  } 
