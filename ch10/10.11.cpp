/*************************************************************************
	> File Name: elimDups.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 11:18:04 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::sort;
using std::unique;
using std::string;
using std::vector;
using std::stable_sort;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(words);
    /*向算法传递isShorter函数
     *stable_sort可以保持等长的元素间的字典序
     */
    //stable_sort(words.begin(), words.end(), isShorter);
    //使用lambda代替isShorter
    stable_sort(words.begin(), words.end(), [](const string s1, const string s2){return s1.size() < s2.size();});
    auto iter = words.begin();
    while (iter != words.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
    return 0;
}
