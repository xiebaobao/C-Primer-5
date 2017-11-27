/*************************************************************************
	> File Name: 9.45.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 04:40:01 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string func(string &s, string prefix, string suffix)
{
   // s.insert(0, prefix);
    // 也这样写
    s.insert(s.begin(), prefix.begin(), prefix.end());
    s.append(suffix);
    return s;
}

int main()
{
    string s = "xtx";
    string prefix = "Mr.";
    string suffix = "III";
    cout << func(s, prefix, suffix) << endl;
    return 0;
}

