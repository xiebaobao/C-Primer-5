/*************************************************************************
	> File Name: 10.33.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 11:24:41 AM CST
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::ofstream;
using std::ifstream;
using std::istream_iterator;
using std::ostream_iterator;
using std::copy;

void func(const string ifile, const string ofile1, const string ofile2)
{
    vector<int> vec;
    ifstream in(ifile);
    ofstream out1(ofile1);
    ofstream out2(ofile2);

    istream_iterator<int> in_iter(in);
    istream_iterator<int> end;
    ostream_iterator<int> out1_iter(out1, " ");
    ostream_iterator<int> out2_iter(out2, "\n");

    copy(in_iter, end, back_inserter(vec));

    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        cout << *iter << " ";
        if (*iter % 2) { 
            *out1_iter++ = *iter;
        } else {
            *out2_iter++ = *iter;
        }
    }
}

int main()
{
    const string ifile("./10.33.txt");
    const string ofile1("./10.33_ofile1.txt");
    const string ofile2("./10.33_ofile2.txt");
    func(ifile, ofile1, ofile2);
    return 0;
}
