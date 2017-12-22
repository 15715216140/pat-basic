#include <iostream>
using namespace std;
int m = 0, n = 0;
int tree[100000] = {0}; 
int lowbit(int t)
{
	return t & (-t);
}
void add(int x, int y)
{
	for (int i = x; i <= y; i++) {
		tree[i] = 0;
		for (int j = i - lowbit(i) + 1; j <= i; j++) {
			tree[i] += 1;
		}
	}
}
int getsum(int x, int y)
{
	int ans = 0;
	for(int i = y; i >= x; i -= lowbit(i))
		ans += tree[i];
	return ans;
}

int main() 
{
	while (cin >> m >> n) {
		for (int i = 1; i <= n; i++) {
			int num1 = 0, num2 = 0;
			cin >> num1 >> num2;
			add(num1, num2);
		}	
		int a = 0, b = 0, sum = 0;
		cin >> a >> b;
		cout << getsum(a, b) << endl;
	}
	return 0;
}
