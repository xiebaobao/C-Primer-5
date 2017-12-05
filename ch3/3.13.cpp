/*************************************************************************
	> File Name: 3.13.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 21 Nov 2017 01:39:12 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    //当提供的值不能作为元素的初始值，确定无法执行列表初始化后，编译器会尝试用默认值初始化vector对象
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout<<"v1.size="<<v1.size()<<endl;
    cout<<"v2.size="<<v2.size()<<endl;
    cout<<"v3.size="<<v3.size()<<endl;
    cout<<"v4.size="<<v4.size()<<endl;
    cout<<"v5.size="<<v5.size()<<endl;
    cout<<"v6.size="<<v6.size()<<endl;
    cout<<"v7.size="<<v7.size()<<endl;
    return 0;
}
