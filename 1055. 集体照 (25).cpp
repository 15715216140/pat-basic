#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct stu {
	string name;
	int high;
};
bool cmp(stu x, stu y) {
	if(x.high == y.high ) 	return x.name  < y.name ;
	else					return x.high  > y.high ;
}
int main() {
	int n, m, hi;
	string na;
	cin >> n >> m;
	vector<stu> a[n/m], v;
	for(int i = 0; i < n; i++) {
		cin >> na >> hi;
		v.push_back(stu {na,hi}) ;
	}
	sort(v.begin() , v.end() , cmp);
	int cnt = 0;
	for(int i = 0; i < n-n/m*m+m; i++)
		a[0].push_back(v[cnt++]) ;
	for(int i = 1; i < n/m; i++)
		for(int j = 0; j < m; j++)
			a[i].push_back(v[cnt++]) ;
	for(int i = 0; i < n / m; i++) {
		int l = a[i].size() % 2 == 0 ? a[i].size()-1 : a[i].size() - 2;
		int r = a[i].size() % 2 == 0 ? a[i].size()-2 : a[i].size() - 1;
		for(int j = l; j >= 1; j = j-2) 
			cout << a[i][j].name << ' ';
		for(int j = 0; j <= r; j = j+2) {
			cout << a[i][j].name;
			if(j != r)	cout <<  ' ';
		}
		cout << endl;
	}
	return 0;
}

