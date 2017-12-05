/*************************************************************************
	> File Name: test.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Thu 23 Nov 2017 10:09:39 AM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class NoDefault {
public:
    int a;
    NoDefault(int b): a(b) {};
};

class C {
public:
    NoDefault object;
    C(NoDefault init):object(init) {};
};

int main()
{
    class NoDefault object1(10);
    class C object2(object1);
    cout << object2.object.a << endl;
    return 0;
}
