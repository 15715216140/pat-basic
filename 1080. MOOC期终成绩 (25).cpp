
同一题目5秒内只能提交1次
1080. MOOC期终成绩 (25)
时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
对于在中国大学MOOC（http://www.icourse163.org/）学习“数据结构”课程的学生，想要获得一张合格证书，必须首先获得不少于200分的在线编程作业分，然后总评获得不少于60分（满分100）。总评成绩的计算公式为 G = (G期中x 40% + G期末x 60%)，如果 G期中 > G期末；否则总评 G 就是 G期末。这里 G期中 和 G期末 分别为学生的期中和期末成绩。

现在的问题是，每次考试都产生一张独立的成绩单。本题就请你编写程序，把不同的成绩单合为一张。

输入格式：

输入在第一行给出3个整数，分别是 P（做了在线编程作业的学生数）、M（参加了期中考试的学生数）、N（参加了期末考试的学生数）。每个数都不超过10000。

接下来有三块输入。第一块包含 P 个在线编程成绩 G编程；第二块包含 M 个期中考试成绩 G期中；第三块包含 N 个期末考试成绩 G期末。每个成绩占一行，格式为：学生学号 分数。其中学生学号为不超过20个字符的英文字母和数字；分数是非负整数（编程总分最高为900分，期中和期末的最高分为100分）。

输出格式：

打印出获得合格证书的学生名单。每个学生占一行，格式为：

学生学号 G编程 G期中 G期末 G

如果有的成绩不存在（例如某人没参加期中考试），则在相应的位置输出“-1”。输出顺序为按照总评分数（四舍五入精确到整数）递减。若有并列，则按学号递增。题目保证学号没有重复，且至少存在1个合格的学生。

输入样例：
6 6 7
01234 880
a1903 199
ydjh2 200
wehu8 300
dx86w 220
missing 400
ydhfu77 99
wehu8 55
ydjh2 98
dx86w 88
a1903 86
01234 39
ydhfu77 88
a1903 66
01234 58
wehu8 84
ydjh2 82
missing 99
dx86w 81
输出样例：
missing 400 -1 99 99
ydjh2 200 98 82 88
dx86w 220 88 81 84
wehu8 300 55 84 84
题解 ：先慕课成绩合格的同学放到一个容器中，并标记是合格的慕课成绩，并初始化stu{sco,name,-1,-1,0} 
在读入其中期末数据的时候，	只有曾经有过慕课成绩的才会被记录;
在读取期末成绩时，把合格的同学放进一个容器中，排序; 
#include <algorithm>
#include <map>
using namespace std;
struct stu {
	string name;
	int be, med, end, fin;
};
bool com(stu x, stu y) {
	if(x.fin == y.fin ) 	return x.name < y.name ;
	return 					x.fin > y.fin;
}
int main() {
	map<string,int> m;
	vector<stu> a, ans;
	string s;
	int p, m1, n ,sco, cnt = 0;
	cin >> p >> m1 >> n;
	for(int i = 0 ; i < p; i++) {
		cin >> s >> sco;
		if(sco >= 200) {
			m[s] = cnt++;//标记学在数组中的id 
			a.push_back(stu {s,sco,-1,-1,0});
		}
	}
	for(int i = 0; i < m1 ; i++) {
		cin >> s >> sco;
		if(m.count(s))	a[m[s]].med = sco;//mooc合格才有资格记录其中成绩 
	}
	for(int i = 0; i < n; i++ ) {
		cin >> s >> sco;
		if(m.count(s)) {
			a[m[s]].end = sco;
			if(a[m[s]].med > a[m[s]].end)	a[m[s]].fin = a[m[s]].med *0.4 +  a[m[s]].end * 0.6 + 0.5;
			else							a[m[s]].fin = a[m[s]].end;
			if(	a[m[s]].fin >= 60)			ans.push_back(a[m[s]]);//期末也合格才会被记录到成绩单 
		}
	}
	sort(ans.begin(),ans.end(),com);
	for(int i = 0; i < ans.size(); i++)
		printf("%s %d %d %d %d\n",ans[i].name.c_str(), ans[i].be, ans[i].med, ans[i].end, ans[i].fin);
	return 0;
}

