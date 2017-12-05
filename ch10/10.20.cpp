/*************************************************************************
	> File Name: 10.20.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 04:48:04 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::count_if;

int main()
{
    vector<string> vec = {"xtx", "jxq", "son", "a", "ab", "abc"};
    auto count = count_if(vec.begin(), vec.end(), [](const string s){return s.size() >= 3;});
    cout << count << endl;
    return 0;
}
