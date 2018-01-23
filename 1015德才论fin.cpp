#include <iostream>
#include <algorithm>
using namespace std;
struct stu {
    int numb, de, cai, leve;
};
bool comp(stu x,stu y)
{
	if(x.leve != y.leve )	return x.leve > y.leve;
	else {
		if(x.de+x.cai  != y.de+y.cai  ) return x.de+x.cai  > y.de+y.cai ;
		else {
			if(x.de != y.de )	return x.de > y.de ;
				else 	return x.numb < y.numb ;
		}
	}
} 
int main() {
    stu a[100000];
    int N,L,H,i,count = 0;
    cin >> N >> L >> H;
    for(i=0; i<N; i++) {
        cin >> a[i].numb >> a[i].de >> a[i].cai;
        if ( a[i].de >= L  &&  a[i].cai >= L) {
            count++;
            if( a[i].de >= H  &&  a[i].cai >=H )
                a[i].leve = 4;
            else if( a[i].de >= H  &&  a[i].cai < H )
                a[i].leve= 3;
            else if( a[i].de < H  &&  a[i].cai <H && a[i].de >=a[i].cai  )
                a[i].leve   = 2;
            else
                a[i].leve  = 1;
        }
        else	a[i].leve = 0;
    }
  sort(a,a+N,comp);
    cout << count << endl;
    for(i = 0; i < count; i++) 
        cout <<  a[i].numb << " " << a[i].de <<" " << a[i].cai << "\n";
    return 0;
}

