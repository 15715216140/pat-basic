#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
int main()
{
	long long n,i=0;
	n= LLONG_MAX ;
	
	while(n)
	{
		n/=10;
		i++; 
	}
	cout  <<sizeof(long long int); 
 } 
