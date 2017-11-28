/*************************************************************************
	> File Name: 10.13.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 02:23:24 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::partition;

bool compare(const string s1)
{
    return (s1.size() >= 5 ? false : true) ;
}

int main()
{
    vector<string> vec = {"xtx", "jxq", "xietangxin", "jiangxiaoqin", "myson", "son"};
    auto new_iter = partition(vec.begin(), vec.end(), compare);
    while (new_iter != vec.end()) {
        cout << *new_iter << " ";
        ++new_iter;
    }
    cout << endl;
    return 0;
}
