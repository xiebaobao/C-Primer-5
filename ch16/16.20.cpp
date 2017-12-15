/*************************************************************************
	> File Name: 16.20.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Fri 15 Dec 2017 12:24:27 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

template<typename T> void print(const T &t)
{
    for (auto iter = begin(t); iter != end(t); ++iter) {
        cout << *iter << " ";
    }
}

int main()
{
    vector<char> v = {'a', 'b', 'c', 'd'};
    print(v);
    cout << endl;
    return 0;
}
