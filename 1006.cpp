#include <iostream> 
int main() {
  using namespace std;
  int n,nn,i;
  cin >> n;
  nn = n / 100;
  for(i=1; i<=nn; i++) 
    cout <<  "B";
  nn = (n %100) / 10;
  for(i=1; i<=nn; i++) 
    cout <<  "S";
  nn = n % 10;
  for(i=1; i<=nn; i++) 
    cout <<  i;  
}
