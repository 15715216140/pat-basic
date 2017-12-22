#include <iostream>
#include <ctime> 
using namespace std;
int main()
{	
	clock_t t1,t2;
	t1 = clock();
	//
	//
	t2 = clock();
	cout << t2-t1  << "ms";//µ¥Î»ms 
	return 0;
}

