#include <iostream>
#include <cstring>
using namespace std;
int map[1005][1005];
int x[3] ={-1,0,1}, y[3] ={-1,0,1};
int main() {
	int m, n, p, ex ,ey;
	cin >> m >> n >> p;
	int count =0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> map[i][j];
		}
	}
	for(int i = 2; i <= n-1; i++) {
		for(int j = 2; j <= m-1; j++) {
			int isma = 1;
			for(int a = 0; a < 3; a++){
				for(int b = 0; b < 3 ; b++) {
					if(!(x[a]==0 &&  y[b]==0)){
						if( abs(map[i][j] - map[i+x[a]][j+y[b]]) <= p) {
							isma = 0;
							break;
						}
						if(isma == 0)
							break;
					}
				}
			}
			if(isma) {
				count++;
				ex = j;
				ey = i;
					cout << "(" << ex << ", " << ey << ")" << ": " << map[i][j]; 
			}
			if(count == 50) {
				cout << "Not Unique";
				return 0;
			}

		}
	}
//	if(count == 0) {
//		cout << "Not Exist";
	//if(count == 1 || count == 0)
	//	cout << "(" << ex << " "<< ey << ")" << ": " <<¡¡map[ex][ey]; 
		//cout << "(" << ex << ", " << ey << ")" << ": " << map[ex][ey]; 
		return 0;
} 
