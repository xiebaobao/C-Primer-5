/*************************************************************************
	> File Name: 9.28.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 11:08:55 AM CST
 ************************************************************************/

#include <iostream>
#include <forward_list>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::forward_list;
using std::string;

void insert(forward_list<string> &s, string s1, string s2)
{
    int flag = 0;
    //设置前趋节点记录
    auto prev = s.before_begin();
    auto curr = s.begin();
    while (curr != s.end()) {
        if (*curr == s1) {
            curr = s.insert_after(curr, s2);
            flag = 1;
        } 
        prev = curr;
        ++curr;
    }
    if (!flag)
        s.insert_after(prev, s2);
}

void print(forward_list<string> s)
{
    auto iter = s.begin();
    while (iter != s.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

int main()
{
    forward_list<string> s = {string("xtx"), string("jxq"), string("son")};
    insert(s, string("xtx"), string("dog"));
    print(s);
    insert(s, string("xtxs"), string("cat"));
    print(s);
    return 0;
}

