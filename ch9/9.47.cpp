/*************************************************************************
	> File Name: 9.47.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 05:04:02 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s = "ab2c3d7R34E6";
    string numbers = "0123456789";
    string::size_type pos = 0;
    cout << "s: " << s << endl;
    while ((pos = s.find_first_of(numbers, pos)) != string::npos) {
        cout << "第" << pos << "位是数字" << endl;
        ++pos;
    }

    // 不是数字就是字母
    pos = 0;
    while ((pos = s.find_first_not_of(numbers, pos)) != string::npos) {
        cout << "第" << pos << "位是字母" << endl;
        ++pos;
    }
    return 0;
}

