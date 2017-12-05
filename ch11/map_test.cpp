/*************************************************************************
	> File Name: map_test.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 04:37:24 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;


int main()
{
    map<string, string> test;
    test.insert({"xtx","1"});
    test.insert({"xtx","2"});
    cout << test["xtx"] << endl;  //  "1"
    return 0;

}
