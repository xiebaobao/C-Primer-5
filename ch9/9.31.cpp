/*************************************************************************
	> File Name: 9.31.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 02:38:28 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::forward_list;

void print(vector<int> a)
{
    cout << "vector: ";
    for (auto iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

void print_list(list<int> a)
{
    cout << "list: ";
    for (auto iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

void print_forward_list(forward_list<int> a)
{
    cout << "forward_list: ";
    for (auto iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

void func_list(list<int> &a)
{
    auto iter =  a.begin();
    while (iter != a.end()) {
        if (*iter % 2) {
            iter = a.insert(iter, *iter);
            advance(iter, 2);
   //         iter = iter + 2;
        }else
            iter = a.erase(iter);
    }
}

void func_forward_list(forward_list<int> &a)
{
    auto prev = a.before_begin();
    auto iter = a.begin();
    while (iter != a.end()) {
        if (*iter % 2) {
            iter = a.insert_after(prev, *iter);
            advance(prev, 2);
            advance(iter, 2);
 //           iter = iter + 2;

        }else
            iter = a.erase_after(prev);
    }
}


int main()
{
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            iter += 2;
        } else
            iter = vi.erase(iter);
    }
    print(vi);

    //list 和 forward_list 测试
    list<int> list1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<int> list2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func_list(list1);
    print_list(list1);
    func_forward_list(list2);
    print_forward_list(list2);
    return 0;
    
}

