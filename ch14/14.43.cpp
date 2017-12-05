/*************************************************************************
	> File Name: 14.43.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 05 Dec 2017 02:43:34 PM CST
 ************************************************************************/

#include <iostream>
#include <functional>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::modulus;
using std::all_of;
using std::begin;
using std::end;

int main()
{
    int table[5] = {1, 2, 3, 4, 5};
    int input;
    cin >> input;
    modulus<int> mod;
    auto func = [&](int i){ return 0 == mod(input, i); };
    auto result = all_of(begin(table), end(table), func);
    cout << input << (result ? " can " : " can't ") << "divide value of table exactly" << endl;
    return 0;
}
