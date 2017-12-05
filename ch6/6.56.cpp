/*************************************************************************
	> File Name: 6.56.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 22 Nov 2017 03:58:21 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multify(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return b != 0 ? a /b : 0;
}

int main()
{
    typedef int (*p)(int, int);
    vector<p> func_vector = {add, subtract, multify, divide};
    for (auto f : func_vector)
        cout << f(2, 2) << endl;
    return 0;
}

