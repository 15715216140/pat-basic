#include <algorithm> 
#include <iostream> 
using namespace std;
int main() {
	int n, m;
	char c;
	cin >> n >> c;
	if(n % 2 == 0)
		m = n/2;
	else
		m = n/2 + 1;
	for(int i = 1; i <= n; i++) {
		cout << c;
	}
	cout << endl;
	for(int i = 2; i <= m-1; i++) {
		cout << c;
		for(int j = 2; j <= n-1; j++) {
			cout << ' ';
		}
		cout << c << endl; 
	}
	for(int i = 1; i <= n; i++) {
		cout << c;
	}
	cout << endl;
}
