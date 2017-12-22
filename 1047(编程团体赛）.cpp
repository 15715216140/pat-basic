#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int team, stu, sco, maxt;
	char c;
	int a[105] = {0};
	for(int i = 0; i < n; i++) {
		cin >> team >> c >> stu >> sco; 
		a[team] += sco;
	}
	maxt = 1;
	for(int i = 2; i < 103; i++) {
		if(a[maxt] < a[i])
			maxt = i;
	}
	cout << maxt << ' ' << a[maxt] ;
	return 0;
}

