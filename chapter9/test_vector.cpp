/*************************************************************************
	> File Name: test_vector.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 02:23:23 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print(vector<int> a)
{
    vector<int>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {0,1,2,3,4};
    // vector的insert是在给定位置之前插入新的元素，返回指向新插入元素的迭代器
    auto iter = a.insert(a.begin() + 2, 5);
    cout << "return *iter" << *iter << endl;
    print(a);
    return 0;
}
