#include <iostream>

1044. ��������(20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����������13���Ƽ����ģ�

�����˵�0�������˳�Ϊtret��
����������1��12�Ļ����ķֱ�Ϊ��jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec��
�����˽���λ�Ժ��12����λ���ֱַ��Ϊ��tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou��
��������˵����֡�29������ɻ����ľ��ǡ�hel mar�����������ġ�elo nov����Ӧ�������֡�115����Ϊ�˷��㽻���������д����ʵ�ֵ���ͻ�������֮��Ļ��롣

�����ʽ��

�����һ�и���һ��������N��<100�������N�У�ÿ�и���һ��[0, 169)�����ڵ����� ���� �����ǵ����ģ������ǻ����ġ�

�����ʽ��

��Ӧ�����ÿһ�У���һ���������������һ�����Ե����֡�

����������
4
29
5
elo nov
tam
���������
hel mar
may
115
13

mapӳ��,�㷨û�Ѷ�,ϸ�ڴ�����, 
#include <string>
#include <map>
using namespace std;
string s1[] = { "tret" ,"jan", "feb", "mar", "apr", "may", "jun", "jly",
                "aug", "sep", "oct", "nov", "dec"  };
string s2[] = { "0","tam", "hel", "maa", "huh", "tou",
                "kes", "hei", "elo", "syy", "lok", "mer", "jou"  };
map<string,int> m1, m2;
void f1(string t) {
	int temp = stoi(t);
	int tdec, tge;
	tdec = temp/13;
	tge = temp%13;
	if(temp == 0) {
		cout << "tret" << endl;
		return ;
	}
	if(tge == 0 ) 	cout << s2[tdec] <<endl;
	if(tdec == 0)	cout << s1[tge] << endl;
	if(tdec && tge)  cout << s2[tdec] << ' ' << s1[tge] << endl;
	return ;
}
void f2(string t) {
	if(t.size() == 3 || t.size() == 4) {
		if(m1.count(t)) cout << m1[t] << endl;
		else			cout << m2[t]*13 << endl;
		return ;
	} else {
		int i;
		string t1 = "", t2 = "";
		for( i = 0; i <= 2; i++)
			t2 += t[i];
		for(i = 4 ; i < t.size(); i++)
			t1 += t[i];
		cout << m2[t2]*13 + m1[t1] << endl;
	}
	return ;
}
int main() {
	m1["tret"] = 0; m1["jan"] = 1 ; m1["feb"] = 2; m1["mar"] =3 ;
	m1["apr"] = 4 ; m1["may"] = 5 ; m1["jun"] = 6 ; m1["jly"] =7 ;
	m1["aug"] = 8 ; m1["sep"] = 9 ; m1["oct"] = 10 ; m1["nov"] =11; m1["dec"] = 12;
	m2["tam"] = 1 ; m2["hel"] = 2 ; m2["maa"] = 3 ; m2["huh"] =4 ;
	m2["tou"] = 5 ; m2["kes"] = 6 ; m2["hei"] = 7; m2["elo"] =8 ;
	m2["syy"] = 9 ; m2["lok"] = 10 ; m2["mer"] = 11; m2["jou"] = 12;
	int n;
	scanf("%d\n",&n);
	for(int i = 0; i < n; i++) {
		string s;
		getline(cin,s);
		if(isdigit(s[0])) 	f1(s);
		else				f2(s);
	}
	return 0;
}

