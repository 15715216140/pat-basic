1048. ���ּ���(20)
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
����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ��������������A������һ������B������ÿ1λ������A�Ķ�Ӧλ���ϵ����ֽ����������㣺������λ����Ӧλ��������Ӻ��13ȡ�ࡪ��������J����10��Q����11��K����12����ż��λ����B�����ּ�ȥA�����֣������Ϊ���������ټ�10���������λΪ��1λ��

�����ʽ��

������һ�������θ���A��B����Ϊ������100λ��������������Կո�ָ���

�����ʽ��

��һ����������ܺ�Ľ����

����������
1234567 368782971
���������
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
	//����a����b�������㶼Ҫ��Ҫ����0; 
	s = sb;
	for(int i = 0; i < sb.size(); i++) {
		int t; 
		if(i % 2 == 0) {	//����λ 
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

