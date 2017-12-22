#include <iostream>
	int main() {
	using namespace std;
    long i, j, t, n, m =3, count = 0, final = 0;
	cin >> n;
	for(i=5; i<=n; i++)
	 {
		for(j=2;j*j<=i;j++) 
		{
			t=i%j;
			if(t==0)
			break;
		} 
		if(t) {
			if(i-m == 2)
			count++;
			m = i;
		}
	}
	cout << count;
}  
