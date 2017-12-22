/*
今天天气好晴朗，处处好风光。在经过了一个多月的阴雨天气，农夫Jony和他的母牛都快发霉了，
终于今天天气放晴了。Jony决定带着他的母牛一起出去溜达溜达。他们来到田野里，
田野里的青草是那么的诱人，母牛想吃青草，但是有些地方种上了玉米，不能通过，
母牛走过的地方青草都被吃完了，所以母牛不会再往回走（不会走回头路）， 
现在Jony站在田野的一边，问有多少种方法能够到达终点。
1 表示草地（可以通行） 
0 表示玉米地 （不能通行）
S 表示起点
E 表示终点
 
输入
一行  两个字符 m,n  2<m,n<20 
表示m行 n列 的一片田野  
接着m行每行n个字符表示田野 

输出
一行，问有多少条路线可以从起点到达终点。


样例输入 
5 5
000S0
01010
01010
01110
E1000

样例输出 
1
*/


#include<iostream>
#include<cstring>
using namespace std;
int m,n,sx,sy,ex,ey,ans;
int x[]={0,0,-1,1},y[]={-1,1,0,0};
int map[20000][10000];
char  c;
bool flag[1000][1000];
void dfs(int tx,int ty){
	if(tx==ex&&ty==ey){
		ans++;
		return ;
	}
	for(int i=0;i<4;i++){
		if(map[tx+x[i]][ty+y[i]]==1&&flag[tx+x[i]][ty+y[i]]==true){
			flag[tx+x[i]][ty+y[i]]=false;
			dfs(tx+x[i],ty+y[i]);
			flag[tx+x[i]][ty+y[i]]=true;
		}
	}
}

int main(){
	cin>>m>>n;
	ans=0;
	memset(flag,true,sizeof(flag));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>c;
			if(c=='0'){
				map[i][j]=0;
			}
			else{
				map[i][j]=1;
				if(c=='S'){
		    	   sx=i,sy=j;
		    	   flag[i][j]=false; 
			    }
			    if(c=='E'){
				  ex=i,ey=j;
			    }
			}
		    
		}
	}
	dfs(sx,sy);
	cout<<ans<<endl; 
	return 0;
} 


/*
10 10
000S110000
1011110000
1100101111
0111111110
0011100110
0010101101
0010100001
0011111011
1100111011
0001E10011

126



15 10
0101110110
010111S011
0101100101
0110111111
0001111111
1011101010
1110001111
1011101011
1100101101
1101011000
1111101110
0110111110
0001101110
10011E0011
1011111011



20384 
*/ 
