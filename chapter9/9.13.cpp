/*************************************************************************
	> File Name: 9.13.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Mon 27 Nov 2017 09:13:33 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;

int main()
{
    list<int> l(10, 1);
    vector<int> v1(10, 2);
    //使用迭代器拷贝容器
    vector<double> v2(l.begin(), l.end());
    vector<double> v3(v1.begin(), v1.end());

    vector<double>::const_iterator iter;
    for (iter = v2.begin(); iter != v2.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl;
    for (iter = v3.begin(); iter != v3.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl;
    return 0;


}
