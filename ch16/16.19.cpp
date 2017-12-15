/*************************************************************************
	> File Name: 16.19.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Fri 15 Dec 2017 12:05:39 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

template<typename T> void print(const T &t)
{
    for (typename T::size_type i = 0; i != t.size(); ++i) {
        cout << t[i] << " " ;
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    print(v);
    cout << endl;
    return 0;
}
