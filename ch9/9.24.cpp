/*************************************************************************
	> File Name: 9.24.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 10:02:19 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{1, 2, 3, 4};
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    vector<int>::iterator iter = v.begin();
    cout << *iter << endl;
    cout << v.front() << endl;
    return 0;
}


