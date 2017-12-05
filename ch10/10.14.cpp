/*************************************************************************
	> File Name: 10.14.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 03:00:05 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    auto f = [](const int a, const int b){return a+b;};
    cout << "2 + 3 = " << f(2, 3) <<endl;
    return 0;
}
