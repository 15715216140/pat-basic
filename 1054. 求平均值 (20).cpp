1054. 求平均值 (20)
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
本题的基本要求非常简单：给定N个实数，计算它们的平均值。但复杂的是有些输入数据可能是非法的。一个“合法”的输入是[-1000，1000]区间内的实数，并且最多精确到小数点后2位。当你计算平均值的时候，不能把那些非法的数据算在内。

输入格式：

输入第一行给出正整数N（<=100）。随后一行给出N个实数，数字间以一个空格分隔。

输出格式：

对每个非法输入，在一行中输出“ERROR: X is not a legal number”，其中X是输入。最后在一行中输出结果：“The average of K numbers is Y”，其中K是合法输入的个数，Y是它们的平均值，精确到小数点后2位。如果平均值无法计算，则用“Undefined”替换Y。如果K为1，则输出“The average of 1 number is Y”。

输入样例1：
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
输出样例1：
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
输入样例2：
2
aaa -9999
输出样例2：
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined
#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;
bool is(string s) {
//	int cntp = 0;
//	for(int i = 0; i < s.size() ; i++) {
//		if(s[i] != '.' && s[i] != '-' && !isdigit(s[i]))	return false;
//		if(s[i] == '.')	cntp++;
//		if(cntp > 1)	return false;
//		if(s[i] == '-' && i != 0)	return false;
//		if(s[i] == '.' && !( s.size()-1 == i || i == s.size()-3 || s.size() -2 == i) ) return false;
//	}
	if( !regex_match(s,regex("-?\d{0,4}\.?\d{0,2}")	return false;
	double n = stod(s); 
	if(n < -1000 || n > 1000) return false;
	return true;
	
bool is2(string s) {
	double t;
	char a[50], b[50];
	for(int i = 0; i < s.size(); i++)
		a[i] = s[i];
	sscanf(a,"%lf",&t);
	sprintf(b,"%.2lf",t);
	for(int i = 0; i < s.size() ; i++)
		if(a[i] != b[i])	return false;
	if(t < -1000 || t > 1000)	return false;
	return true;
}
int main() {
	int n, cnt = 0;
	double sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(is(s) {//is or is2 will be ok 
			cnt++;
			sum += stof(s);
		} else 	printf("ERROR: %s is not a legal number\n",s.c_str());
	}
	if(cnt) {
		if(cnt == 1)	printf("The average of %d number is %.2f\n",cnt,sum);
		else			printf("The average of %d numbers is %.2f\n",cnt,sum/cnt);
	} else cout << "The average of 0 numbers is Undefined\n";
	return 0;
}

