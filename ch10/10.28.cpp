/*************************************************************************
	> File Name: 10.28.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 10:25:21 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::inserter;
using std::back_inserter;
using std::copy;

void print_vec(vector<int> &vec)
{
    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    // vector 不支持 front_inserter 
    vector<int> vec, vec1, vec2, vec3;
    for(int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    copy(vec.begin(), vec.end(), inserter(vec1, vec1.begin()));
    cout << "inserter vec begin: ";
    print_vec(vec1);

    copy(vec.begin(), vec.end(), inserter(vec3, vec3.end()));
    cout << "inserter vec end: ";
    print_vec(vec3);

    copy(vec.begin(), vec.end(), back_inserter(vec2));
    cout << "back_inserter :";
    print_vec(vec2);
    return 0;
}
