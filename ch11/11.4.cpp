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
#include <cctype>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::fstream;
using std::remove_if;


int main()
{
    map<string,size_t> word_count;
    fstream in("./1.txt");
    string word;

    while (in >> word) {
        for (auto iter = word.begin(); iter != word.end(); ++iter) {
            *iter = tolower(*iter);
        }
        //去掉标点符号
        word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
        ++word_count[word];
    }

    for (auto iter = word_count.begin(); iter != word_count.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
