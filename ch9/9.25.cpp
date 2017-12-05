/*************************************************************************
	> File Name: 9.25.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 10:18:48 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print_vector(vector<int> a)
{
    vector<int>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    // 如果删除的两个位置相同  不会删除
    vec.erase(vec.begin(), vec.begin());
    print_vector(vec);
    //如果删除的两个位置是尾后迭代器  不会删除
    vec.erase(vec.end(), vec.end());
    print_vector(vec);
    //删除到结尾处的所有元素
    vec.erase(vec.begin()+1, vec.end());
    print_vector(vec);
    return 0;
}
