/*************************************************************************
	> File Name: 11.3.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 02:52:21 PM CST
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <map>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::fstream;

int main()
{
    map<string,size_t> word_count;
    fstream in("./1.txt");
    string word;

    while (in >> word) {
        ++word_count[word];
    }

    for (auto iter = word_count.begin(); iter != word_count.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
