#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n; 
	int a1, b1, a2, b2, count1 = 0, count2 = 0;
	for(int i = 0; i < n; i++) {
		cin >> a1 >> b1 >> a2 >> b2; 
		if(a1+a2 == b1 && a1+a2 != b2) 
			count1++;
		if(a1+a2 != b1 && a1+a2 == b2)
			count2++;
	}
	cout << count2 << ' ' << count1; 
		return 0;
}

