1043. 输出PATest(20)
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
给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
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


