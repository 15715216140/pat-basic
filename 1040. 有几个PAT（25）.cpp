#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string s;
	int cntt = 0, cntp = 0, sum = 0;
	cin >> s;
	for(int i = 0; i <= s.size() ; i++)  {
		if(s[i] == 'T')		cntt++;
	}
	for(int i = 0; i <= s.size() ; i++) {
		if(s[i] == 'P')		cntp++;
		if(s[i] == 'T')		cntt--;
		if(s[i] == 'A')
		sum = (sum + (cntt*cntp) % 1000000007) % 1000000007;
	}
	cout << sum;
	return 0;
}


