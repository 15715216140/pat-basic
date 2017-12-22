#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
	int a, b, d, count = 0;
	int n[100]; 
	cin >> a >> b >> d;
	a += b;
	if(a == 0)
		{
			cout << 0 << endl;
			return 0;
		}
	while(a) {
		n[count++] =  a % d;
		a = a / d; 
	}
	for(int i = count - 1; i >= 0; i--) 
		cout << n[i];
	cout << endl;
	return 0 ;
} 
