/*************************************************************************
	> File Name: 10.30.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 11:00:11 AM CST
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::sort;

int main()
{
    vector<int> vec;
    istream_iterator<int> in1(cin);
    istream_iterator<int> end; // eof
    copy(in1, end, back_inserter(vec));

    ostream_iterator<int> out1(cout, " ");
    sort(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), out1);
    return 0;

}
