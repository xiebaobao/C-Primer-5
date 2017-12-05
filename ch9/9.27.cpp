/*************************************************************************
	> File Name: 9.27.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 10:54:07 AM CST
 ************************************************************************/

#include <iostream>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;
using std::forward_list;

//删除奇数元素
void delete_odd(forward_list<int> &a) // 这个地方参数是引用才能修改
{
    auto prev = a.before_begin();
    auto curr = a.begin();
    while (curr != a.end()) {
        if ( (*curr % 2) == 1 )
            //由于链表的特殊性，删除其中元素需要知道该元素的前趋节点
            curr = a.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }
}

void print_forward_list(forward_list<int> a)
{
    auto iter = a.begin();
    while (iter != a.end()) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

int main()
{
    forward_list<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    delete_odd(a);
    print_forward_list(a);
}

