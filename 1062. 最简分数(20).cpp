1062. ������(20)
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
һ������һ��д�����������������ʽ��N/M������M��Ϊ0����������ָ���Ӻͷ�ĸû�й�Լ���ķ�����ʾ��ʽ��

�ָ�����������ȵ������� N1/M1 �� N2/M2��Ҫ���㰴��С�����˳���г�����֮���ĸΪK����������

�����ʽ��

������һ���а�N/M�ĸ�ʽ���������������������һ����������ĸK������Կո�ָ�����Ŀ��֤����������������������1000��

�����ʽ��

��һ���а�N/M�ĸ�ʽ�г�������������֮���ĸΪK������������������С�����˳�������1���ո�ָ�������β�����ж���ո���Ŀ��֤������1�������

����������
7/18 13/20 12
���������
5/12 7/12
֮�䣬����˵���ǿ����䣡�������� 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
	if(b == 0)	return a;
	else		return gcd(b,a%b);
}
int main() {
	int a, b, c, d, k, cnt = 0;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
	if(a*d > b*c)	{
		swap(a,c);
		swap(b,d);
	}
	int i;
	while(a * k > b * i) i++;
	for( i = 1; i*d < c*k ;i++) {
		if(i*b > k*a && gcd(i,k) == 1) {
			cnt++;
			if(cnt > 1)	cout << ' ';
			cout << i << '/' << k;
		}
	}
return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
	if(b == 0)	return a;
	else		return gcd(b,a%b);
}
int main() {
	int a, b, c, d, k, cnt = 0;
	double t1,t2;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
	t1 = a*1.0/b;
	t2 = c*1.0/d;
	if(t1 > t2)	swap(t1,t2);
	for(int i = 1; i*1.0/k < t2 ;i++) {
		if(i*1.0/k > t1 && gcd(i,k) == 1) {
			cnt++;
			if(cnt > 1)	cout << ' ';
			cout << i << '/' << k;
		}
	}
return 0;
}


