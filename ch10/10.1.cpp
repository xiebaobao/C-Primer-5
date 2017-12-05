/*************************************************************************
	> File Name: 10.1.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 05:33:18 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
using std::count;

int main()
{
    int a[10] = { 1, 1, 1, 1, 1, 2, 3, 4, 5, 6 };
    cout << count(begin(a), end(a), 1) <<endl;
    return 0;
    
}

