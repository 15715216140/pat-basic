1050. ��������(25)
ʱ������
150 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����Ҫ�󽫸�����N�����������ǵ�����˳�����롰�������󡱡���ν���������󡱣���ָ�����Ͻǵ�1�����ӿ�ʼ����˳ʱ������������䡣Ҫ�����Ĺ�ģΪm��n�У�����������m*n����N��m>=n����m-nȡ���п���ֵ�е���Сֵ��

�����ʽ��

�����ڵ�1���и���һ��������N����2�и���N�����������������������ֲ�����104�����������Կո�ָ���

�����ʽ��

�����������ÿ��n�����֣���m�С�����������1���ո�ָ�����ĩ�����ж���ո�

����������
12
37 76 20 98 76 42 53 95 60 81 58 93
���������
98 95 93
42 37 81
53 20 76
58 60 76

mһ��С��10000,nһ��С��100; 
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

