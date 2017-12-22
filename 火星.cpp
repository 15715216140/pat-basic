#include <iostream>
#include <string>
using namespace std;
string a1[13] = {"tret","jan", "feb"," mar", "apr", "may", "jun", 
				"jly", "aug", "aug", "oct", "nov", "dec"};
string a2[13] = { "no","tam","hel", "maa", "huh", "tou", "kes", "hei", 
					"elo", "syy", "lok", "mer", "jou"}; 
int main() {
	int n, a, b,t;
	string s,s1;
	cin >> n; 
	getchar(); 
	for(int j = 0; j < n; j++) {
		t = 0;
		getline(cin,s);
		if(s.size() == 1){
			cout << a1[s[0]-'0'] << endl;
		}
		if(s.size() == 2){
			t = (s[0]-'0')*10 + s[1]-'0';
			a = t /13;
			b = t % 13;
			if(a != 0) {
				cout << a2[a] << ' '; //为什么打印多一个空格； 
			}
			cout << a1[b] << endl;
		}
		if(s.size() == 3){
			if(s == "tam") {
				cout << 13 << endl;
			}
			else {
				for(int i = 0; i <= 12; i++)
				if(s == a1[i]) {
					cout << i << endl;
					break;
				} 
			}
		}
		if(s.size() == 7){
			s1 = s.substr(0,3);
			for(int i = 0; i <= 12; i++)
				if(s1 == a2[i]) {
					t = i;
					break;
				} 
			s1 = s.substr(4,3);
			for(int i = 0; i <= 12; i++)
				if(s1 == a1[i]) {
					t = t*13+i;
					break;
				} 
			cout << t << endl; 
		}
		
	}
} 
