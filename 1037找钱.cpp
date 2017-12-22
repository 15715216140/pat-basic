#include <algorithm> 
#include <iostream> 
using namespace std;
int main() {
	int n, m;
	int n1, n2, n3, m1, m2, m3;
	char c;
	cin >> n1 >> c >> n2 >> c >> n3 >> m1 >> c >>  m2>> c >> m3;
	n = n1*17*29 + n2*29 + n3;
	m = m1*17*29 + m2*29 + m3;
	n = m - n;
	if(n < 0) {
		cout << '-' ;
		n = -1*n;
	}
	cout << n/(17*29) << '.';
	n = n%(29*17);
	cout << n/29 << '.';
	cout << n%29; 
}
