/*************************************************************************
	> File Name: 13.17.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Thu 30 Nov 2017 10:34:11 AM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class numbered {
public:
    numbered() { static int init_id = 10; id = init_id++;} // 默认构造函
    //拷贝构造函数
    numbered(numbered &s) {id = s.id + 5;}
    int id;
};

void f(numbered &d)
{
    cout << d.id << endl;
}

int main()
{
    numbered a, b = a, c = b;
    cout << "a b c id:" << a.id << b.id << c.id << endl;
    f(a);
    f(b);
    f(c);
    return 0;
}
