/*************************************************************************
	> File Name: 9.43.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 04:16:55 PM CST
 ************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void replace(string &s, string &oldVal, string &newVal)
{
    int size = oldVal.size();
    auto it1 = s.begin();
    auto it2 = newVal.begin();
    auto it3 = newVal.end();
    for (it1; it1 < (s.end() - oldVal.size() + 1); ++it1) {
        if (s.substr(it1 - s.begin(), size) == oldVal) {
            it1 = s.erase(it1, it1 + size);
            s.insert(it1, it2, it3);
            advance(it1, size);
        }
    }
}

int main()
{
    string s = "12abcdfg12";
    string oldVal = "12";
    string newVal = "1234";
    replace(s, oldVal, newVal);
    cout << s << endl;
    return 0;
}
