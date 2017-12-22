#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()  {
  string s1, s2;
  int l1, l2;
  l1 = s1.size() ;
  l2 = s2.size() ; 
  cin >> s1 >> s2;
  l1 = s1.size() ;
  l2 = s2.size() ;
  for(int i = 0; i < l1; i++)
  	if(islower(s1[i])) 
  		s1[i] = toupper(s1[i]);
  for(int i = 0; i < l2; i++)
 	 if(islower(s2[i]))
  		s2[i] = toupper(s2[i]);
    for(int i = 0; i < l1; i++) {
    	if(s1[i] != 0) 
    		{
    			for(int j = i+1; j < l1; j++) {
	  				if( s1[i] == s1[j] )
	  					s1[j] = 0;
	  			}
			}
	}
	for(int i = 0; i < l1; i++) {
    	if(s1[i] != 0) {
    			for(int j = 0; j < l2; j++) {
	  				if(s1[i] == s2[j] )
	  				s1[i] = 0;
			}
		}
  	}
  	for(int i = 0; i < l1; i++) {
  		if(s1[i])
  		//	if(isalpha(s1[i]))
  		//		cout << toupper(s1[i]);
  		//	else
  				cout << s1[i];
  			
	}
	return 0;

}
