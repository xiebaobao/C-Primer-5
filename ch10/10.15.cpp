/*************************************************************************
	> File Name: 10.15.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 03:04:22 PM CST
 ************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void func()
{
    int a = 3;
    static int c = 3;
    //auto f = [a](int b){return a+b ;};
    //lambda的捕获列表只用于局部非static变量，在lambda函数体中可以直接使用局部static变量
    auto f = [](int b){return c+b ;};
    cout << "3 + 3 = " << f(3) <<endl;
}

int main()
{
    func();
    return 0;
}
