#include <iostream>

1044. 火星数字(20)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
火星人是以13进制计数的：

地球人的0被火星人称为tret。
地球人数字1到12的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
火星人将进位以后的12个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
例如地球人的数字“29”翻译成火星文就是“hel mar”；而火星文“elo nov”对应地球数字“115”。为了方便交流，请你编写程序实现地球和火星数字之间的互译。

输入格式：

输入第一行给出一个正整数N（<100），随后N行，每行给出一个[0, 169)区间内的数字 —— 或者是地球文，或者是火星文。

输出格式：

对应输入的每一行，在一行中输出翻译后的另一种语言的数字。

输入样例：
4
29
5
elo nov
tam
输出样例：
hel mar
may
115
13

map映射,算法没难度,细节处理繁琐, 
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

