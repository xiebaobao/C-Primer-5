/*************************************************************************
	> File Name: 3.17.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 21 Nov 2017 04:58:25 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    int i = 0;
    string word;
    vector<string> word_vector;
    while(i < 3) {
        cin >> word;
        for (auto &c : word) {
           c = toupper(c); 
        }
        word_vector.push_back(word);
        i++;
    }
    vector<string>::iterator iter;
    for (iter = word_vector.begin(); iter != word_vector.end(); ++iter) {
        cout<<*iter<<endl;
    }
}
