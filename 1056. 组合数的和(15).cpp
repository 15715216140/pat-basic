
1056. ������ĺ�(15)
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
����N����0�ĸ�λ���֣�����������2�����ֶ�������ϳ�1��2λ�����֡�Ҫ�����п�����ϳ�����2λ���ֵĺ͡��������2��5��8���������ϳ���25��28��52��58��82��85�����ǵĺ�Ϊ330��

�����ʽ��

������һ�����ȸ���N��1<N<10���������N����ͬ�ķ�0��λ���֡����ּ��Կո�ָ���

�����ʽ��

������п�����ϳ�����2λ���ֵĺ͡�

����������
3 2 8 5
���������
330#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v;
	int t,sum = 0;
	while(cin >> t) v.push_back(t);
	for(int i = 1; i < v.size() ; i++) 
		for(int j = 1; j < v.size() ; j++) 
			if(i != j ) sum += v[i]*10 + v[j]; 
	cout << sum;
return 0;
}

