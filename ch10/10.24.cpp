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
using std::find_if;
using std::placeholders::_1;//使用bind

bool check_size(const int i, string::size_type sz)
{
    return i > sz;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    string s = "xtx";
    string::size_type sz = s.length();
    auto wc = find_if(vec.begin(), vec.end(), bind(check_size, _1, sz));
    cout << "vector value >" << sz << " is " << *wc << endl;
    return 0;
}
