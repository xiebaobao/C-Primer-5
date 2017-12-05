/*************************************************************************
	> File Name: test.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 20 Nov 2017 05:46:08 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1 = 1, v2 = 2;
    cout << "the sum of " << v1;
    cout << " and " << v2;
    cout << "is "<< v1+v2<< endl;

    cout << "/*"<<endl;
    cout << "*/"<<endl;
//    cout << /* "*/" */ ;
    cout << /* "*/" /* "/*" */;
    return 0;
}
