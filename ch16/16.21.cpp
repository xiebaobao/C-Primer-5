/*************************************************************************
	> File Name: 16.21.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Fri 15 Dec 2017 03:20:16 PM CST
 ************************************************************************/

#include <iostream>
#include "DebugDelete.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double *p1 = new double;
    int *p2 = new int;
    DebugDelete d(cout);
    d(p1);
    d(p2);
    return 0;
}
