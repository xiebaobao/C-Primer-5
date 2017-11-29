/*************************************************************************
	> File Name: 10.34.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 02:20:57 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::find;
using std::copy;

//使用reverse_iterator 逆序输出
void reverse_print(vector<int> vec)
{
    vector<int>::reverse_iterator iter = vec.rbegin();
    while (iter != vec.rend()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

//使用正常迭代器逆序输出
void print(vector<int> vec)
{
    auto iter = vec.end();
    while (--iter != vec.begin()) {
        cout << *iter << " ";
    }
    cout << *(vec.begin()) << endl;
}

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10};
    //练习10.34
    reverse_print(vec);

    //练习10.35
    print(vec);

    //练习10.36
    auto value = find(vec.rbegin(), vec.rend(), 0);
    cout << *value << endl;

    //练习10.37
    list<int> list1;
    copy(vec.rbegin()+2, vec.rbegin()+7, back_inserter(list1));
    for (auto iter = list1.begin(); iter != list1.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
