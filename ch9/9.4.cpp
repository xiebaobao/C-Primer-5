/*************************************************************************
	> File Name: 9.4.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 08:35:17 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool find(vector<int>::iterator b, vector<int>::iterator e, int data)
{
    vector<int>::iterator iter;
    for (iter = b; iter != e; ++iter) {
        if (*iter == data)
            return true;
    }
    return false;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    if (find(v.begin(), v.end(), 3))
        cout<<"find data 3"<<endl;
    if (!find(v.begin(), v.end(), 12))
        cout<<"didn't find data 12"<<endl;
    return 0;
}
