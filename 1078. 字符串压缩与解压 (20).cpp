#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s ;
	char c;
	scanf("%c\n",&c);
	getline(cin,s);
	if(c == 'C') {
		for(int i = 0, j; i < s.size();) {
			int cnt = 1;
			for(j = i+1; j < s.size() ; j++) {
				if(s[i] == s[j])	cnt++;
				else 				break;
			}
			if(cnt > 1)	cout << cnt;
			cout << s[i];
			i = j;
		}
	}
	if(c == 'D') {
		for(int i = 0, j; i < s.size();) {
			string ss = "";
			if(isdigit(s[i])) {
				for(j = i; j <= s.size(); j++) {
					if(isdigit(s[j]))	ss = ss + s[j];
					else				break;
				}
				int n = stoi(ss);
				for( int k = 1;k <= n; k++) {
					cout << s[j];
				} 
				i = j+1;
			}
			else	if(!isdigit(s[i])) {
						cout << s[i];
					i++;
			}
		}
	}
return 0;
}

