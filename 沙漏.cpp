#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int sum, n;
	char c;
	cin >> sum >> c; 
	n = sqrt((sum+1)/2);
	for(int i = n; i >= 1; i--) {
		for(int j = 1; j <= 2*n - 1;j++) {
			if(j < n-i+1 || j > n+i-1)
				{
					if(j < n-i+1)
					cout << ' ';
				}
			else
				cout << c;
		}
		cout  << endl;
	}
	for(int i = 2; i <= n; i++) {
		for(int j = 1; j <= 2*n - 1;j++) {
			if(j < n-i+1 || j > n+i-1)
				{
					if(j < n-i+1)
					cout << ' ';
				}
			else
				cout << c;
		}
		cout  << endl;
	}
	cout << sum - 2*n*n + 1 ;
	return 0;
} 
