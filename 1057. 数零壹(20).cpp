1057. ����Ҽ(20)
ʱ������
200 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����һ�����Ȳ�����105���ַ���������Ҫ���㽫��������Ӣ����ĸ����ţ���ĸa-z��Ӧ���1-26�����ִ�Сд����ӣ��õ�����N��Ȼ���ٷ���һ��N�Ķ����Ʊ�ʾ���ж���0������1����������ַ�����PAT (Basic)��������ĸ���֮��Ϊ��16+1+20+2+1+19+9+3=71����71�Ķ�������1000111������3��0��4��1��

�����ʽ��

������һ���и������Ȳ�����105���Իس��������ַ�����

�����ʽ��

��һ�����Ⱥ����0�ĸ�����1�ĸ���������Կո�ָ���

����������
PAT (Basic)
���������
3 4
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s;
	vector<int> v;
	getline(cin,s);
	int sum = 0, cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < s.size() ; i++)
		if(isalpha(s[i]))	sum += tolower(s[i]) - 'a' + 1;
	while(sum) {
		if(sum % 2 == 0)	cnt0++;
		else				cnt1++;
		sum = sum/2; 
	}
	cout << cnt0 << ' ' <<  cnt1;
return 0;
}

