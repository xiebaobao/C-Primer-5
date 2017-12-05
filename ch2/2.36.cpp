/*************************************************************************
	> File Name: 2.36.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 21 Nov 2017 12:35:04 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    return 0;

}
