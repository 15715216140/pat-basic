
1085. PAT��λ���� (25)
ʱ������
500 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
ÿ�� PAT ���Խ����󣬿������Ķ��ᷢ��һ��������λ���а񡣱��������ʵ��������ܡ�

�����ʽ��

�����һ�и���һ��������N��<=105�������������������N�У�ÿ�а����и�ʽ����һ����������Ϣ��

׼��֤�� �÷� ѧУ

���С�׼��֤�š�����6���ַ���ɵ��ַ�����������ĸ��ʾ���Եļ��𣺡�B�������Ҽ�����A������׼�����T�������������÷֡��� [0,100] �����ڵ���������ѧУ�����ɲ�����6��Ӣ����ĸ��ɵĵ�λ�루��Сд�޹أ���ע�⣺��Ŀ��֤ÿ��������׼��֤���ǲ�ͬ�ġ�

�����ʽ��

������һ���������λ������������¸�ʽ�ǽ��������λ�����а�

���� ѧУ ��Ȩ�ܷ� ��������

���С��������Ǹõ�λ����������1��ʼ������ѧУ����ȫ����Сд��ĸ����ĵ�λ�룻����Ȩ�ܷ֡�����Ϊ���Ҽ��ܷ�/1.5 + �׼��ܷ� + �����ܷ�*1.5�����������֣��������������Ǹ����ڵ�λ�Ŀ�������������

ѧУ���Ȱ���Ȩ�ܷ����С����в��У���Ӧ��Ӧ��ͬ����������������������������������Ȼ���У��򰴵�λ����ֵ��������

����������
10
A57908 85 Au
B57908 54 LanX
A37487 60 au
T28374 67 CMU
T32486 24 hypu
A66734 92 cmu
B76378 71 AU
A47780 45 lanx
A72809 100 pku
A03274 45 hypu
���������
5
1 cmu 192 2
1 au 192 3
3 pku 100 1
4 hypu 81 2
4 lanx 81 2
���һ�����Ե㣬��Ҫ��double�洢�����ǿ��ת��Ϊint�� cmp��ҲҪ���� 
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
string tolow(string &s) {
	for(int i = 0; i < s.size() ; i++)
		s[i] = tolower(s[i]);
	return s;
}
struct sch {
	string name;
	double sco;
	int peo, rank;
};
bool cmp(sch a, sch b) {
	int t1 = a.sco, t2 = b.sco;
	if(t1 == t2 ) {
		if(a.peo == b.peo )	return a.name < b.name ;
		else				return a.peo < b.peo ;
	} else	return t1 > t2 ;
}
int main() {
	map<string,sch> m;
	vector<sch> v;
	int n;
	string stu ,tname;
	double tsco;
	cin >> n ;
	for(int i = 0; i < n; i++) {
		cin >> stu >> tsco >> tname;
		tname = tolow(tname);
		if(stu[0] == 'B')	 tsco /= 1.5;
		if(stu[0] == 'T')	 tsco *= 1.5;
		m[tname].name = tname;
		m[tname].sco += tsco;
		m[tname].peo++;
	}
	cout << m.size() << endl;
	for(auto i = m.begin(); i != m.end(); i++)
		v.push_back(i->second);
	sort(v.begin(),v.end(),cmp);
	int t = v[0].sco;
	v[0].rank = 1;
	printf("%d %s %d %d\n",v[0].rank, v[0].name.c_str(),t , v[0].peo);
	for(int i = 1; i < v.size(); i++) {
		int t1 = v[i].sco, t2 = v[i-1].sco;
		if(t1 == t2	)	v[i].rank = v[i-1].rank;
		else			v[i].rank = i+1;
		printf("%d %s %d %d\n",v[i].rank, v[i].name.c_str(), t1, v[i].peo);
	}
	return 0;
}
