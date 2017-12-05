/*************************************************************************
	> File Name: 13.27.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Thu 30 Nov 2017 02:41:01 PM CST
 ************************************************************************/

#include <iostream>
#include "HasPtr.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    HasPtr p1("Hiya!");
    cout << "p1: " << p1.getStr() << "use: " << p1.getUse() <<endl;
    HasPtr p2(p1);
    cout << "p2: " << p2.getStr() << "use: " << p2.getUse() <<endl;
    HasPtr p3(p1);
    cout << "p3: " << p3.getStr() << "use: " << p3.getUse() <<endl;
    return 0;
}

