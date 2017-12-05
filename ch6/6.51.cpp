/*************************************************************************
	> File Name: 6.51.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 22 Nov 2017 03:35:45 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int a)
{
    cout << "f(int)" <<endl;
}

void f(int a, int b)
{
    cout << "f(int, int)" <<endl;
}

void f(double a, double b)
{
    cout << "f(double, double)" << endl;
}

int main()
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
