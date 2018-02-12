#include <iostream>
1051. 复数乘法 (15)
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
复数可以写成(A + Bi)的常规形式，其中A是实部，B是虚部，i是虚数单位，满足i2 = -1；也可以写成极坐标下的指数形式(R*e(Pi))，其中R是复数模，P是辐角，i是虚数单位，其等价于三角形式 R(cos(P) + isin(P))。

现给定两个复数的R和P，要求输出两数乘积的常规形式。

输入格式：

输入在一行中依次给出两个复数的R1, P1, R2, P2，数字间以空格分隔。

输出格式：

在一行中按照“A+Bi”的格式输出两数乘积的常规形式，实部和虚部均保留2位小数。注意：如果B是负数，则应该写成“A-|B|i”的形式。

输入样例：
2.3 3.5 5.2 0.4
输出样例：
-8.68-8.23i
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	double r1, p1, r2, p2, a1, a2, b1, b2, a, b; 
	cin >> r1 >> p1 >> r2 >> p2;
	a1 = r1*cos(p1) ; b1 = r1*sin(p1);
	a2 = r2*cos(p2) ; b2 = r2*sin(p2);
	a = a1*a2 - b1*b2;
	b = a1*b2 + a2*b1;
	char s1[10000],s2[10000];
	sprintf(s1,"%.2f",a);
	sprintf(s2,"%.2f",b); 
	if(strcmp(s1,"-0.00"))	printf("0.00");
	else			printf("%.2f",a);	
	if(strcmp(s2,"-0.00"))   printf("+0.00i");//不能s=="-0.01", c c++不要混用； 
	else {
		if(b >= 0)	printf("+%.2fi",b);
		if(b < 0)	printf("%.2fi",b);
	}
	return 0;
}

