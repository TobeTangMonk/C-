//#include<stdio.h>
//int main()
//
//{char c;
//	while((c=getchar())!='\n')
//	{
//		if(c>='A'&&c<='Z')
//			c=c+32;
//		printf("%c",c);
//		}
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int n,k,a[10][1000];
//	printf("请输入密码长度和子串数目n和k:"); 
//	int i;
//	scanf("%d%d",&n,&k);
//	printf("请输入你k个的子串：");
//	for(i=0;i<k;i++)                    //输入k个子串 
//	{    
//		scanf("%s",&a[i]);
//	}                                                                        
//	                                         
//	
//	char c;
//	while((c=getchar())!='\n')
//	{
//		if(a[i]>='a'&&a[i]<='z')
//	{
//		if(n>=1&&n<=25)
//	{
//	if(k>=0&&k<=10)
//	{
//		
//		if(a[i]==a[i-1])         //看看字符是否重叠 
//		{
//			
//			
//		}    
//		else{ 
//		k=k*i;
//		printf("%d",k);
//		
//		  
//		}  
//	}
//	
//		
//	}
//	 } 
//	
//	
//	
//	
//	}
//	
//	                                  //查找字符必须为‘a'-'z' 
//	
//	
//return 0;	
//	
//	
//	
//	
//	
//	
// } 
 
 // AC DP 机看不懂 

//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//using namespace std;
//typedef long long LL;
//const int maxn = 200;
//const int maxm = 26;
//LL dp[maxn][40][1<<11];
//bool vis[maxn][40][1<<11];
//char tmp[40];
//char s[40];
//int n,m;
//struct Acautomata{
//    int ch[maxn][maxm],val[maxn],fail[maxn],root,sz;
//    int newnode(){
//        val[sz] = 0;
//        memset(ch[sz],0,sizeof(ch[sz]));
//        return sz++;
//    }
//    void init(){
//        sz = 0;
//        root = newnode();
//    }
//    void insert(char *s, int v){
//        int u = root, len = strlen(s);
//        for(int i = 0; i < len; i++){
//            int now = s[i] - 'a';
//            if(!ch[u][now]){
//                ch[u][now] = newnode();
//            }
//            u = ch[u][now];
//        }
//        val[u] |= v;
//    }// 
//    void build(){
//        queue <int> q;
//        fail[0] = 0;
//        for(int i = 0; i < maxm; i++){
//            int u = ch[0][i];
//            if(u){
//                q.push(u); fail[u] = 0;
//            }
//        }
//        while(q.size()){
//            int u = q.front(); q.pop();
//            for(int i = 0; i < maxm; i++){
//                int v = ch[u][i];
//                if(!v){
//                    ch[u][i] = ch[fail[u]][i];
//                    continue;
//                }
//                q.push(v);
//                int j = fail[u];
//                while(j && !ch[j][i]) j = fail[j];
//                fail[v] = ch[j][i];
//                val[v] |= val[fail[v]];
//            }
//        }
//    }// 
//    LL dfs(int u,int len,int st)
//    {
//        if(vis[u][len][st]) return dp[u][len][st];
//        vis[u][len][st] = 1;
//        LL &ans = dp[u][len][st];
//        if(len == n){
//            if(st == (1<<m)-1) return ans = 1;
//            else{
//                return ans = 0;
//            }
//        }
//        ans = 0;
//        for(int i = 0; i < maxm; i++){
//            ans += dfs(ch[u][i], len+1, st|val[ch[u][i]]);
//        }
//        return ans;
//    }
//    void print_path(int u,int len,int st)
//    {
//        if(len == n)
//        {
//            for(int i = 1; i <= len; i++) printf("%c",tmp[i]);
//            printf("\n");
//            return ;
//        }
//        for(int i = 0; i < maxm; i++)
//        {
//            tmp[len+1] = 'a' + i;
//            if(dp[ch[u][i]][len+1][st|val[ch[u][i]]])
//            {
//                print_path(ch[u][i],len+1,st|val[ch[u][i]]);
//            }
//        }
//    }
//}ac;//自定义了一个 
//int main()
//{
//    int ks = 1;
//    while(scanf("%d%d",&n,&m) != EOF)
//    {
//        if(n == 0 && m == 0) break;
//        ac.init();// 
//        for(int i = 0; i < m; i++){
//            scanf("%s",s);
//            ac.insert(s, 1<<i);
//        }
//        ac.build();// 
//        memset(vis,0,sizeof(vis));
//        //memset(dp,0,sizeof(dp));
//        LL ans = ac.dfs(0,0,0);
//        //printf("%lld\n",ans);
//        printf("%lld\n",ans);
//        if(ans <= 42)
//            ac.print_path(0,0,0);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{ int a,b,c,i=100;
//	
//	for(i=100;i<1000;i++)
//	{    
//	    a=i/100;           
//	    b=i%100/10;
//   	   c=i%10;
//	   if(i==a*a*a+b*b*b+c*c*c) // 判断符号if(  ==  ) 不是(=) 
//		 printf("%d\n",i);
//	  
//		
//		
//		
//	} 
//	return 0;
//		}	
//    	
//#include <stdio.h>
//#define N 34
//int main(int argc, char **argv)
//{
//    int a[N][N];
//    int i,j,n;
//    printf("请输入你需要的杨辉三角的行数："); 
//    scanf("%d",&n);
//                              for(i = 0;i < n;i++)
//                                      for(j = 0;j <= i;j++)
//                                           a[i][j] = 1;           // 重点 包含了a[i][i] and a[0][1]=1 
//            
//            
//    for(i = 2;i < n;i++)
//        for(j = 1;j < i;j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//    for(i = 0;i < n;i++)
//    {
//        for(j = 0;j <= i;j++)
//            printf("%d ",a[i][j]);
//        printf("\n");
//    }
//}

	
//#include<stdio.h>
//int main()
//{
//	 int a,b,c,i;
//	
//	for(i=100;i<1000;i++)
//	{
//		int a=i/100;
//		int b=i%100/10;
//		int c=i%10;
//      
//		
//	 if(a*a*a+b*b*b+c*c*c==i)
//		 printf("%d\n",i);
//	}
//  	
//	
//	
//}
//#include <stdio.h>
//int main()
//{
//long long i,sum;
//scanf("%I64d",&i);  // 此方法可以计算n无限大 
//sum=(i+1)*i/2;
//printf("%I64d",sum);
//return 0;
//}
#include<stdio.h>
int main()
{
	
}

