#include <iostream>
int main ()  {
	using namespace std;
	int N, M, i;
	cin >> N >> M ;
	int *p = new int[N];
	for(i=0; i<N; i++)
		cin >> p[i];
	for(i=N-M; i<N; i++)
		{
			if(i !=N-M)
			cout << " ";
			cout << p[i];
		}
	for(i=0; i<N-M; i++)
	cout << " " << p[i];
	delete p;
} 
