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


void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(words);
    auto iter = words.begin();
    while (iter != words.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
    return 0;
}
