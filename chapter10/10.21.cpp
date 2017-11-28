/*************************************************************************
	> File Name: 10.21.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 04:55:34 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i = 2;
    cout << "true :" << true 
        << " flase:" << false << endl;
    auto f = [&i]()->bool{
        if (i == 0)
            return true;
        else {
            --i;
            return false;
        }
    };
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    return 0;
}

