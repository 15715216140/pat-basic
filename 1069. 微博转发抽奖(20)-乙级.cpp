1069 微博转发抽奖（20 分）
小明 PAT 考了满分，高兴之余决定发起微博转发抽奖活动，从转发的网友中按顺序每隔 N 个人就发出一个红包。请你编写程序帮助他确定中奖名单。

输入格式：
输入第一行给出三个正整数 M（≤ 1000）、N 和 S，分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）。随后 M 行，顺序给出转发微博的网友的昵称（不超过 20 个字符、不包含空格回车的非空字符串）。

注意：可能有人转发多次，但不能中奖多次。所以如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。

输出格式：
按照输入的顺序输出中奖名单，每个昵称占一行。如果没有人中奖，则输出 Keep going...。

输入样例 1：
9 3 2
Imgonnawin!
PickMe
PickMeMeMeee
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain
输出样例 1：
PickMe
Imgonnawin!
TryAgainAgain
输入样例 2：
2 3 5
Imgonnawin!
PickMe
输出样例 2：
Keep going...

从begin位置的人才开始统计,如果遇到中过奖的或者还没到第一个检索的位置，就continue。
cnt++表示当前有效的人的位置，根据位置判断是否中奖。注意题目k的可能取1

#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string,int> m;
    int n, k, begin, cnt = 0, flag = 0;
    cin >> n >> k >> begin;
    for(int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        if(i < begin) continue;
        if(m[name] == 0) {
            cnt++;
            if((cnt - 1) % k == 0) {
                cout << name << endl;
                m[name] = 1;
                flag = 1;
            }
        }
    }
    if(flag == 0) cout << "Keep going...";
}

