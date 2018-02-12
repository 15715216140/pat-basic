1050. 螺旋矩阵(25)
时间限制
150 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
本题要求将给定的N个正整数按非递增的顺序，填入“螺旋矩阵”。所谓“螺旋矩阵”，是指从左上角第1个格子开始，按顺时针螺旋方向填充。要求矩阵的规模为m行n列，满足条件：m*n等于N；m>=n；且m-n取所有可能值中的最小值。

输入格式：

输入在第1行中给出一个正整数N，第2行给出N个待填充的正整数。所有数字不超过104，相邻数字以空格分隔。

输出格式：

输出螺旋矩阵。每行n个数字，共m行。相邻数字以1个空格分隔，行末不得有多余空格。

输入样例：
12
37 76 20 98 76 42 53 95 60 81 58 93
输出样例：
98 95 93
42 37 81
53 20 76
58 60 76

m一定小于10000,n一定小于100; 
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int t, cnt = 0, m, n,i,j ,num, map[10005][105] = {0};
int main() {
	vector<int> v;
	scanf("%d",&t);
	for(i = sqrt(t); i >= 1; i--) {
		if(t % i == 0) {
			n = i;
			m = t/n;
			break;
		}
	}
	for( i = 0; i < t; i++) {
		scanf("%d",&num);
		v.push_back(num);
	} 
	if(t == 1) {
		cout << v[0] << endl;
		return 0;
	}
	sort(v.begin(),v.end(), greater<int>());
	int x = 0, y = 0;
	while(cnt < t) {
		while(x < n && map[y][x] == 0) {
			map[y][x] = v[cnt++];
			x++;
		}
		x--;
		y++;
		while(y < m && map[y][x] == 0) {
			map[y][x] = v[cnt++];
			y++;
		}
		y--;
		x--;
		while(x >= 0 && map[y][x] == 0) {
			map[y][x] = v[cnt++];
			x--;
		}
		x++;
		y--;
		while(y >= 0 && map[y][x] == 0) {
			map[y][x] = v[cnt++]; 
			y--;
		}
		y++;
		x++;
	} 
	for(i = 0; i < m; i++) {
		for( j = 0; j < n; j++) {
			printf("%d",map[i][j]);
			if(j != n-1)	cout << ' ';
		}
		printf("\n");
	}
return 0;
}

