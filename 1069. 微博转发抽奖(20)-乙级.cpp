#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string,int> mp;
	int n, t, b;
	string str;
	cin >> n >> t >> b;
	bool isap = false;
	for(int i = 1; i <= n; i++) {
		cin >> str;
		if(mp[str] == 1)	b++;
		if(i == b && mp[str] == 0) {
			cout  << str << endl;
			mp[str] = 1;
			isap = true;
			b += t;
		}
	}
	if(!isap)	cout << "Keep going...\n";
	return 0;
}


