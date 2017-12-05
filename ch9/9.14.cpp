/*************************************************************************
	> File Name: 9.14.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 09:28:15 AM CST
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::string;
int main()
{
    list<const char *> l{"xtx", "jxq", "son"};
    vector<string> v;
    v.assign(l.begin(), l.end());
    vector<string>::iterator iter;
    for (iter = v.begin(); iter != v.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
    
}
