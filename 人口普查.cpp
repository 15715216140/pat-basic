#include <iostream>
#include <algorithm>
using namespace std;
struct per {
	string name;
	double year;
	double moon;
	double date;
	double nl;
}a[100000];
int main() {
	int n, count;
	cin >> n;
	int minn = 0, maxn = 0;
	for(int i = 0; i < n ; i++) {
		per t;
		char c1, c2 , c3 , c4 , c5 , c6 ;
		cin >> t.name >> t.year >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 ;
		t.moon = (c2-'0')*10 + c3 - '0';
		t.date = (c2-'0')*10 + c6 - '0';
		t.nl  = 2014 - t.year + (9 - t.moon) / 100 + (6 - t.date) / 10000 ;
		if(t.nl >= 0 && t.nl <= 200)
			{
				a[count++] = t;
				if(count > 1) {
					if(a[maxn].nl  < a[count-1].nl  )
						maxn = count-1;
					if(a[minn].nl > a[count-1].nl  )
						minn = count-1;
				} 
			
			}
		
	}
	cout << count ;
	if(count) {
			cout << " " <<  a[maxn].name << ' '  ;
			cout <<  a[minn].name << endl ;
	}
	
	
	
} 
