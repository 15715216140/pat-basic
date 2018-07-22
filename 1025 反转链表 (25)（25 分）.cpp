1025 反转链表 (25)（25 分）
给定一个常数K以及一个单链表L，请编写程序将L中每K个结点反转。例如：给定L为1→2→3→4→5→6，K为3，则输出应该为3→2→1→6→5→4；如果K为4，则输出应该为4→3→2→1→5→6，即最后不到K个元素不反转。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出第1个结点的地址、结点总个数正整数N(<= 10^5^)、以及正整数K(<=N)，即要求反转的子链结点的个数。结点的地址是5位非负整数，NULL地址用-1表示。

接下来有N行，每行格式为：

Address Data Next

其中Address是结点地址，Data是该结点保存的整数数据，Next是下一结点的地址。

输出格式：

对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：

00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：

00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
#
给出一段链表（里边包含干扰节点），对美每k个数翻转一次，试试最后链表的顺序
用结构体node{id,value,next}表示每个节点，用数组m记录，可以根据id查到该节点信息。
遍历链表，把有用节点存下来，翻转，并记录有用节点的个数,每k个数翻转一次用reverse函数。
输出时候输出当前节点的id和value，next为下一个节点的id
#
调试bug：
忘记记录有用节点个数，导致翻转次数错误
#
include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node{
	int id, value, next;
};
int main(){
	int begin, n , k, cnt = 0;
	node m[100001];
	vector<node> v;
	cin >> begin >> n >>k;
	for(int i = 0; i < n; i++) {
		int tbegin, tnum, tend;
		scanf("%d%d%d",&tbegin, &tnum, &tend);
		m[tbegin] = {tbegin, tnum, tend};
	} 
	for(int i = begin; i != -1; i = m[i].next) {
		cnt++;
		v.push_back(m[i]);
	}
	int group = cnt / k;
	for(int i = 0; i < group; i++) 
		reverse(v.begin() + i * k,v.begin() + k * i + k);
	for(int i = 0; i < v.size() - 1; i++) 
		printf("%05d %d %05d\n", v[i].id, v[i].value, v[i+1].id);
	printf("%05d %d -1\n", v[cnt-1].id, v[cnt-1].value);
	return 0;
}