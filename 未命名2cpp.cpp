#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int t, i,j ,N, M, a[100];
	cin >> N  >> M;
	for(i=0; i<N; i++)
	cin >> a[i];
	for(j=0; j<M; j++) {
		t = a[N-1];
		for(i=N-1; i=1; i++) {
		a[i] = a[i-1];
		}
		a[0] = t;
	}
	for(i=0; i<N; i++)
	cout << a[i] << ' ';
}

