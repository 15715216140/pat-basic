
1085. PAT单位排行 (25)
时间限制
500 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
每次 PAT 考试结束后，考试中心都会发布一个考生单位排行榜。本题就请你实现这个功能。

输入格式：

输入第一行给出一个正整数N（<=105），即考生人数。随后N行，每行按下列格式给出一个考生的信息：

准考证号 得分 学校

其中“准考证号”是由6个字符组成的字符串，其首字母表示考试的级别：“B”代表乙级，“A”代表甲级，“T”代表顶级；“得分”是 [0,100] 区间内的整数；“学校”是由不超过6个英文字母组成的单位码（大小写无关）。注意：题目保证每个考生的准考证号是不同的。

输出格式：

首先在一行中输出单位个数。随后按以下格式非降序输出单位的排行榜：

排名 学校 加权总分 考生人数

其中“排名”是该单位的排名（从1开始）；“学校”是全部按小写字母输出的单位码；“加权总分”定义为“乙级总分/1.5 + 甲级总分 + 顶级总分*1.5”的整数部分；“考生人数”是该属于单位的考生的总人数。

学校首先按加权总分排行。如有并列，则应对应相同的排名，并按考生人数升序输出。如果仍然并列，则按单位码的字典序输出。

输入样例：
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
输出样例：
5
1 cmu 192 2
1 au 192 3
3 pku 100 1
4 hypu 81 2
4 lanx 81 2
最后一个测试点，需要用double存储，最后强制转换为int， cmp里也要这样 
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
