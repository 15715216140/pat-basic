
1079. �ӳٵĻ����� (20)
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
����һ�� k+1 λ�������� N��д�� ak...a1a0 ����ʽ�����ж����� i �� 0 <= ai < 10 �� ak > 0��N ����Ϊһ�������������ҽ��������� i �� ai = ak-i����Ҳ������Ϊһ����������

�ǻ�����Ҳ����ͨ��һϵ�в�����������������Ƚ���������ת���ٽ���ת���������ӣ�����ͻ�����һ�������������ظ������ת����ӵĲ�����ֱ��һ�����������֡����һ���ǻ��������Ա�����������ͳ������Ϊ�ӳٵĻ������������巭���� https://en.wikipedia.org/wiki/Palindromic_number��

��������һ��������������Ҫ�����ҵ��������Ǹ���������

�����ʽ��

������һ���и���һ��������1000λ����������

�����ʽ��

�Ը�����������һ��һ����������������Ĺ��̡�ÿ�и�ʽ����

A + B = C
����A��ԭʼ�����֣�B��A����ת����C�����ǵĺ͡�A�������������ʼ���ظ�����ֱ��C��10�����ڱ�ɻ���������ʱ��һ���������C is a palindromic number.�����������10����û�ܵõ���������������һ���������Not found in 10 iterations.����

�������� 1��
97152
������� 1��
97152 + 25179 = 122331
122331 + 133221 = 255552
255552 is a palindromic number.
�������� 2��
196
������� 2��
196 + 691 = 887
887 + 788 = 1675
1675 + 5761 = 7436
7436 + 6347 = 13783
13783 + 38731 = 52514
52514 + 41525 = 94039
94039 + 93049 = 187088
187088 + 880781 = 1067869
1067869 + 9687601 = 10755470
10755470 + 07455701 = 18211171
Not found in 10 iterations.#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string p(string s) {
	reverse(s.begin() ,s.end());
	return s;
}
string add(string s1, string s2) {
	string s = s1;
	int carry = 0;
	for(int i = s1.size()-1; i >= 0; i--) {
		s[i] = (s1[i] - '0' + s2[i] - '0' + carry) % 10 + '0';
		carry = (s1[i] - '0' + s2[i] - '0' + carry) / 10;
	}
	if(carry > 0) {
		char c = carry + '0';
		s = c + s;
	}
	return s;
}
int main() {
	string s, sum;
	int n = 10;
	cin >> s;
	if(s == p(s)) {
			cout << s << " is a palindromic number.\n";
			return 0;
		}
	while (n--) {
		sum = add(s,p(s));
		printf("%s + %s = %s\n",s.c_str(),p(s).c_str(),sum.c_str());
		if(sum == p(sum)) {
			cout << sum << " is a palindromic number.\n";
			return 0;
		}
		s = sum;
	}
	cout << "Not found in 10 iterations.\n";
return 0;
}

