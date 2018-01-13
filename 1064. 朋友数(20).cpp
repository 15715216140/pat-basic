#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	int n ,t;
	int a[101] = {0};
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> t;
		int sum = 0;
		while(t) {
			sum += t%10;
			t /= 10;
		}
		a[sum]++;
	}
	int cnt = 0;
	for(int i = 1; i <= 100; i++){
		if(a[i])
			cnt++;
	} 
	cout << cnt << endl;
	int cntt = 0; 
	for(int i = 1; i <= 100; i++){
		if(a[i]){
			cntt++;
			cout << i; 
			if(cntt != cnt)	cout << ' '; 
		}
	} 
	return 0;
}


