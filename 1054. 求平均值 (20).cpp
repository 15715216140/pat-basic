1054. ��ƽ��ֵ (20)
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
����Ļ���Ҫ��ǳ��򵥣�����N��ʵ�����������ǵ�ƽ��ֵ�������ӵ�����Щ�������ݿ����ǷǷ��ġ�һ�����Ϸ�����������[-1000��1000]�����ڵ�ʵ����������ྫȷ��С�����2λ���������ƽ��ֵ��ʱ�򣬲��ܰ���Щ�Ƿ������������ڡ�

�����ʽ��

�����һ�и���������N��<=100�������һ�и���N��ʵ�������ּ���һ���ո�ָ���

�����ʽ��

��ÿ���Ƿ����룬��һ���������ERROR: X is not a legal number��������X�����롣�����һ��������������The average of K numbers is Y��������K�ǺϷ�����ĸ�����Y�����ǵ�ƽ��ֵ����ȷ��С�����2λ�����ƽ��ֵ�޷����㣬���á�Undefined���滻Y�����KΪ1���������The average of 1 number is Y����

��������1��
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
�������1��
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
��������2��
2
aaa -9999
�������2��
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

