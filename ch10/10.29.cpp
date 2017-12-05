/*************************************************************************
	> File Name: 10.29.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 10:46:46 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::copy;
using std::istream_iterator;
using std::back_inserter;
using std::vector;
using std::string;
using std::ifstream;

int main()
{
    vector<string> vec;
    ifstream in1("./10.1.cpp");
    istream_iterator<string> str(in1);
    istream_iterator<string> end; // 尾后迭代器

    copy(str, end, back_inserter(vec));
    
    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
