1048. 数字加密(20)
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
本题要求实现一种数字加密方法。首先固定一个加密用正整数A，对任一正整数B，将其每1位数字与A的对应位置上的数字进行以下运算：对奇数位，对应位的数字相加后对13取余——这里用J代表10、Q代表11、K代表12；对偶数位，用B的数字减去A的数字，若结果为负数，则再加10。这里令个位为第1位。

输入格式：

输入在一行中依次给出A和B，均为不超过100位的正整数，其间以空格分隔。

输出格式：

在一行中输出加密后的结果。

输入样例：
1234567 368782971
输出样例：
3695Q8118 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string sa, sb, s;
	cin >> sa >> sb;
	reverse(sa.begin(),sa.end());
	reverse(sb.begin(),sb.end());
	int la = sa.size();
	int lb = sb.size();
	if(la < lb)	sa.append(lb-la,'0');
	if(lb < la)	sb.append(la-lb,'0');
	//不管a还是b长，不足都要都要补上0; 
	s = sb;
	for(int i = 0; i < sb.size(); i++) {
		int t; 
		if(i % 2 == 0) {	//奇数位 
			t = (sa[i] - '0' + sb[i] - '0') % 13;
			if(t <= 9) 	s[i] = t + '0';
			if(t == 10)	s[i] = 'J';
			if(t == 11)	s[i] = 'Q';
			if(t == 12)	s[i] = 'K';
		} 
		else {
			t = sb[i]  - sa[i];
			if(t < 0)	s[i] = t+10+'0';
			else		s[i] = t+'0'; 
		}
	}
	reverse(s.begin() , s.end());
	cout << s;
return 0;
}

