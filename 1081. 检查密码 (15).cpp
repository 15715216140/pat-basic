1081. ������� (15)
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
����Ҫ�������ĳ��վ���û�ע��ģ��дһ������Ϸ��Լ���С���ܡ�����վҪ���û����õ���������ɲ�����6���ַ���ɣ�����ֻ����Ӣ����ĸ�����ֺ�С����"."�������������ĸҲ�����֡�

�����ʽ��

�����һ�и���һ�������� N��<=100������� N �У�ÿ�и���һ���û����õ����룬Ϊ������80���ַ��ķǿ��ַ������Իس�������

�����ʽ��

��ÿ���û������룬��һ�������ϵͳ������Ϣ��������5�֣�

�������Ϸ��������Your password is wan mei.����
�������̫�̣����ۺϷ���񣬶������Your password is tai duan le.����
������볤�ȺϷ��������ڲ��Ϸ��ַ����������Your password is tai luan le.����
������볤�ȺϷ�����ֻ����ĸû�����֣��������Your password needs shu zi.����
������볤�ȺϷ�����ֻ������û����ĸ���������Your password needs zi mu.����
����������
5
123s
zheshi.wodepw
1234.5678
WanMei23333
pass*word.6
���������
Your password is tai duan le.
Your password needs shu zi.
Your password needs zi mu.
Your password is wan mei.
Your password is tai luan le.
ֻ�᱾���һ���ӣ���Ŀ˵�ǿ��ַ����������ַ�����û�пո�
��cin ����getline() , ��ok,�����ǵõ�һ��getline()ǰҪ�ѻ��з���ǰ���� 

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	int n , ans = 0;
	cin >> n;
	getchar();
	for(int i = 0; i < n; i++) {
		string s;
		int al = 0, di = 0, po = 0, oth = 0;
		getline(cin,s);
		for(int j = 0; j < s.size() ; j++) {
			if(isalpha(s[j]))		al++;
			else if(isdigit(s[j]))	di++;
			else if(s[j] == '.')	po++;
			else 					oth++;
		}
		if(s.size() < 6)	cout << "Your password is tai duan le.\n";
		else {
			if(oth)	cout << "Your password is tai luan le.\n";
			else {
				if(al && di)	cout << "Your password is wan mei.\n";
				if(al && !di)	cout << "Your password needs shu zi.\n";
				if(!al && di)	cout << "Your password needs zi mu.\n";
			}
		}
	} 
return 0;
}
