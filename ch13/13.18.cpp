/*************************************************************************
	> File Name: 13.18.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Thu 30 Nov 2017 11:18:20 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Employee {
public:
    Employee() { id = ++init_id; };
    Employee(string s_name) {name = s_name; id = ++init_id; }
    string getName() {return name;}
    int getId() {return id;}
private:
    string name;
    int id;
    static int init_id;// static 成员在类中定义
};
// static成员在类外面 赋值
int Employee::init_id = 0;

int main()
{
    Employee a("xtx");
    Employee b("jxq");
    cout << a.getName() << " " << a.getId() << endl;
    cout << b.getName() << " " << b.getId() << endl;
}
