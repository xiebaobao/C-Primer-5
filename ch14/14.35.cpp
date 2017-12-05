/*************************************************************************
	> File Name: 14.35.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 05 Dec 2017 11:07:46 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::string;

class GetString {
public:
    GetString(istream &i = cin) : is(i) {}  // 默认设置读取流是cin
    string operator()() const {
        string text;
        getline(is, text);
        return is ? text : string();
    }

private:
    istream &is;  // 用于读取的目的流
};

int main()
{
    GetString getString; // 函数对象
    cout << getString() << endl;
    return 0;
}
