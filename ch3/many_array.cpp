/*************************************************************************
	> File Name: many_array.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 22 Nov 2017 09:29:58 AM CST
 ************************************************************************/

#include <iostream>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
int main()
{
    int ia[3][4] = {{1,2,3,4}, {2,3,4,5}, {3,4,5,6}};
    int (*p)[4] = ia;
    //使用指针遍历二维数组
    for ( auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q) {
            cout<<*q<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    //是标准库的begin 和 end 遍历二维数组
    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q) {
            cout<<*q<<" ";
        }
        cout<<endl;
    }
    return 0;
}
