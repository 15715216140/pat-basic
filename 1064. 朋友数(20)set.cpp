#include <iostream>
#include <set>
#include <string>
using namespace std;
int f(int n) {
	int sum = 0;
	while(n) {
		sum += n%10;
		n /= 10;
	} 
	return sum;
}
int main() {
	set<int> s;
	int n ,t;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> t;
		s.insert(f(t)); 
	}
	cout << s.size()  << endl;
	for(auto i = s.begin() ; i != s.end() ; i++) {
		if(i != s.begin() )	cout << ' ';
		cout << *i;
	}
	return 0;
}


