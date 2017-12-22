#include <iostream>
#include <algorithm> 
using namespace std;
struct moon {
	float num;
	float pri;
	float dpri;
}a[1000];
int com(moon a,moon b) {
	return a.dpri > b.dpri ;
}
int main() {
	int n, v;
	float res;
	cin >> n >> v;
	res = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i].num ;
	}
	for(int i = 0; i < n; i++) {
		cin >> a[i].pri ;
		a[i].dpri = a[i].pri / a[i].num ;
	}
	sort(a,a+n,com);
	for(int i = 0; i < n; i++) {
		if(v > a[i].num )
			res += a[i].pri ;
		else
			{
				res += a[i].dpri * v;
				break;
			}
		v = v - a[i].num;
		}
	printf("%.2f\n",res); 
} 
