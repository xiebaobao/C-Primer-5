/*************************************************************************
	> File Name: 10.27.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 09:54:57 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::unique_copy;
using std::back_inserter;


void print_vec(vector<int> &vec)
{
    cout << "vec: ";
    auto iter = vec.begin();
    while (iter != vec.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

void print_list(list<int> &l)
{
    cout << "list: ";
    auto iter = l.begin();
    while (iter != l.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

int main()
{
    //写在最前面unique 和 unique_copy 只能消除序列中相邻的重复元素

    vector<int> vec = {1, 1, 2, 2, 3, 3};
    list<int> list1;
   /* auto end = unique(vec.begin(), vec.end());
    cout << *end << endl;
    print_vec(vec);
    //unique_copy 的第三个参数表示拷贝的目标位置
    copy(vec.begin(), end, back_inserter(list1));*/
    unique_copy(vec.begin(), vec.end(), back_inserter(list1));
    print_list(list1);
    return 0;
}
