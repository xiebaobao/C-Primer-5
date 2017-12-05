/*************************************************************************
	> File Name: test_vec.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 10:18:36 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    cout << "empty vec size: " << vec.size() << " capacity:" << vec.capacity() << endl;
    // reserve 不能改变vector 的大小，它只是改变容量
    vec.reserve(10);
    cout << "after reserve 10, vec size: " << vec.size() << " capacity:"  << vec.capacity() << endl;
    return 0;
}

