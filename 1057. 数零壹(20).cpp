1057. 数零壹(20)
时间限制
200 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
给定一串长度不超过105的字符串，本题要求你将其中所有英文字母的序号（字母a-z对应序号1-26，不分大小写）相加，得到整数N，然后再分析一下N的二进制表示中有多少0、多少1。例如给定字符串“PAT (Basic)”，其字母序号之和为：16+1+20+2+1+19+9+3=71，而71的二进制是1000111，即有3个0、4个1。

输入格式：

输入在一行中给出长度不超过105、以回车结束的字符串。

输出格式：

在一行中先后输出0的个数和1的个数，其间以空格分隔。

输入样例：
PAT (Basic)
输出样例：
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

