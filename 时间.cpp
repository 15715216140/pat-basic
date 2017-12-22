
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    a = ( b - a + 50) / 100;
	int shi, fen, mi; 
	shi = a / 3600;
	fen = (a % 3600) / 60;
	mi = a % 60;
	printf("%02d:%02d:%02d",shi,fen,mi);
    return 0;
}
