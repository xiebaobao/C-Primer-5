/*************************************************************************
	> File Name: 9.26.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 10:32:07 AM CST
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;

void print_vec(vector<int> a)
{
    vector<int>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

void print_list(list<int> a) 
{
    list<int>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++ iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    list<int> list1(ia, ia+9);
    vector<int> vec1(ia, ia+9);
    list<int>::iterator iter1 = list1.begin();
    vector<int>::iterator iter2 = vec1.begin();

    //删除list中的奇数元素
    while (iter1 != list1.end()) {
        if ((*iter1 % 2) == 1)
            iter1 = list1.erase(iter1); // 关键在于删除之后要更新迭代器位置
        else
            ++iter1;
    }
    print_list(list1);

    //删除vector的偶数元素
    while (iter2 != vec1.end()) {
        if ((*iter2 % 2) == 0)
            iter2 = vec1.erase(iter2);
        else
            ++iter2;
    }
    print_vec(vec1);
    return 0;
}
