#include <iostream>
using namespace std;
struct per {
	int num;
	int gra;
}a[100000];
int main() {
	int n;
	cin >> n;
	for(int i = 0 ; i < n; i++) {
		cin >> a[i].num >> a[i].gra ;
	}
	for(int i = 0; i < n; i++) {
		if(a[i].gra != -1) {
			for(int j = i+1; j < n; j++) {
				if(a[i].num == a[j].num ) {
					a[i].gra += a[j].gra ;
					a[j].gra = -1;
				}
			}
		}
	}
	int min = 0;
	for(int i = 1; i < n; i++) {
		if(a[i].gra != -1)
			if(a[min].gra  < a[i].gra )
				min = i;
	}
	cout << a[min].num << ' ' << a[min].gra ; 
	
} 
