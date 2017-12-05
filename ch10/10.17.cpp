/*************************************************************************
	> File Name: 10.12.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 01:57:47 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::stable_sort;

class Sales_data {
public:
    string isbn;
    Sales_data();
    Sales_data(string s):isbn(s) {  }
    string get_isbn()
    {
        return isbn;
    }

};

int main()
{
    
    vector<Sales_data> vec = {Sales_data("x"), Sales_data("jxq"), Sales_data("so")};
    // 使用lambda表达式代替之前的函数
    stable_sort(vec.begin(), vec.end(), [](const Sales_data s1, const Sales_data s2)
                { return s1.isbn.size() < s2.isbn.size(); });
    // 输出vector
    auto iter = vec.begin();
    while (iter != vec.end()) {
        cout << (*iter).get_isbn() << " ";
        ++iter;
    }
    cout << endl;
    return 0;
}
