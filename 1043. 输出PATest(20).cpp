1043. ���PATest(20)
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
����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰���PATestPATest....��������˳������������������ַ�����Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������

�����ʽ��

������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����

�����ʽ��

��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�

����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
PATestPATestPTetPTePePee
#include <iostream>
#include <queue>
using namespace std;
int main() {
	char c; 
	queue<char> P, A, T, e, s, t;
	while((scanf("%c",&c)) != EOF) {
		if(c == '\n')	break;
		if(c == 'P')	P.push(c);  
		if(c == 'A')	A.push(c);  
		if(c == 'T')	T.push(c);  
		if(c == 'e')	e.push(c); 
		if(c == 's')	s.push(c);  
		if(c == 't')	t.push(c);
	}
	while(!P.empty() || !A.empty() || !T.empty() || !e.empty() || !s.empty() || !t.empty() ) {
		if(!P.empty())  {	cout << 'P';	P.pop() ;	}
		if(!A.empty()) 	{	cout << 'A';	A.pop() ;	}
		if(!T.empty())  {	cout << 'T';	T.pop() ;	}
		if(!e.empty()) 	{	cout << 'e';	e.pop() ;	}
		if(!s.empty())  {	cout << 's';	s.pop() ;	}
		if(!t.empty())  {	cout << 't';	t.pop() ;	}
	}
	return 0;
}


