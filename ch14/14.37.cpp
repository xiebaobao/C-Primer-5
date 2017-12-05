/*************************************************************************
	> File Name: 14.37.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 05 Dec 2017 01:47:09 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::replace_if;

class IsEqual {
public:
    IsEqual(int s) : value(s) {}
    bool operator()(int a) {
        return a == value;
    }
private:
    int value;
};

int main()
{
    vector<int> vec = {1, 2, 3, 3, 5};
    replace_if(vec.begin(), vec.end(), IsEqual(3), 5);
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

