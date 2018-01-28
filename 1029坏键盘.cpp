#include <iostream>
#include <cctype>
#include <map>
using namespace std;
int main() {
	string a , b, s = "";
	cin >> a >> b;
	for(int i = 0; i < a.length() ; i++) 
			if(b.find(a[i]) == string::npos &&  s.find(toupper(a[i])) == string::npos ) {
				s += toupper(a[i]);
			}
	cout << s;
	return 0;
}


