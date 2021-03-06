1045. 快速排序(25)-PAT乙级真题
著名的快速排序算法里有一个经典的划分过程：我们通常采用某种方法取一个元素作为主元，通过交换，把比主元小的元素放到它的左边，比主元大的元素放到它的右边。 给定划分后的N个互不相同的正整数的排列，请问有多少个元素可能是划分前选取的主元？
例如给定N = 5, 排列是1、3、2、4、5。则：
1的左边没有元素，右边的元素都比它大，所以它可能是主元；
尽管3的左边元素都比它小，但是它右边的2它小，所以它不能是主元；
尽管2的右边元素都比它大，但其左边的3比它大，所以它不能是主元；
类似原因，4和5都可能是主元。
因此，有3个元素可能是主元。
输入格式：
输入在第1行中给出一个正整数N（<= 105）； 第2行是空格分隔的N个不同的正整数，每个数不超过109。
输出格式：
在第1行中输出有可能是主元的元素个数；在第2行中按递增顺序输出这些元素，其间以1个空格分隔，行末不得有多余空格。
输入样例：
5
1 3 2 4 5
输出样例：
3
1 4 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[100005] = {0}, maxn[100005] = {0}, minn[100005] = {0}; 
int main() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 1; i <= n; i++) 
		cin >> a[i];
	for(int i = 1; i <= n; i++ )
		maxn[i] = max(a[i],maxn[i-1]);//minn[i] 代表 i（包括i）到最前面最大的那个数； 
	minn[n] = a[n];
	for(int i = n-1; i >= 1; i--)
		minn[i] = min(a[i],minn[i+1]);//minn[i] 代表 i（包括i）到最后面最小的那个数；
	for(int i = 1; i <= n; i++) 
		if(a[i] == minn[i] && a[i] == maxn[i])//a[i]在前半部分最大，后半部分最小；即满足要求； 
			v.push_back(a[i]);
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++) {
		if(i != 0)	cout << ' ';
		cout << v[i];
	}
	cout << endl; 
return 0;
}

