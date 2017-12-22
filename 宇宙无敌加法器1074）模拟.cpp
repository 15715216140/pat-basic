#include <iostream>
#include <cstring> 
#include <string> 
using namespace std;
int main() {
	string s, s1, s2 ,t;
	int s3[25], s4[25],m;
	cin >> s >> s1 >> s2;
	int jin = 0;
	if(s1.size()  > s1.size() )
		swap(s1,s2);
	if(s1.size() != s2.size() )
	{
		t = s2;
		s2 = s1;
		m = s1.size() - t.size();
		for(int i = 0; i < s2.size(); i++)
			{
				if(i < m)
					s2[i] = '0';
				else
					s2[i] = t[i-m];
			}
		
	}
	for(int i = s2.size() - 1; i >= 0; i--){
		if(s[i] == '0')
			s[i] += 10;
		s3[i] = (jin + s1[i] + s2[i] -'0' - '0') % (s[i] - '0');
		jin = (jin + s1[i] + s2[i] -'0' - '0') / (s[i] - '0');
	}
	if(jin == 0)
		{
			int i;
			for(i = 0; i < s2.size() ; i++)
				if(s3[i] != 0)
					{	 break;}
			for(; i < s2.size() ; i++)
				cout << s3[i] ;
			cout << endl;

		}
	else
		{
			cout << jin;
		for(int i = 0; i < s2.size() ; i++)
		cout << s3[i] ;
	cout << endl;

		}
} 
