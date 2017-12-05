/*************************************************************************
	> File Name: 10.22.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 09:22:16 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>//使用bind函数
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::count_if;
using std::placeholders::_1;//使用bind

bool check_size(const string s, string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    vector<string> vec = {"xtx", "jxq", "son", "a", "b", "c"};
    string::size_type sz = 3;
    auto wc = count_if(vec.begin(), vec.end(), bind(check_size, _1, sz));
    cout << "size >" << sz << " is " << wc << endl;
    return 0;

}
