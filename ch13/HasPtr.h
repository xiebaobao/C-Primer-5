/*************************************************************************
	> File Name: HasPtr.h
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Thu 30 Nov 2017 02:31:57 PM CST
 ************************************************************************/

#ifndef _HASPTR_H
#define _HASPTR_H
#include <string>
using std::string;
using std::size_t;

class HasPtr {
public:
    //构造函数
    HasPtr(const string &s = string()):ps(new string(s)), i(0), use(new size_t(1)) {}

    //拷贝构造函数
    HasPtr(const HasPtr &p):
        ps(p.ps), i(p.i), use(p.use) { ++*use; }

    //拷贝赋值运算符
    HasPtr& operator=(const HasPtr&);

    //获取类成员接口
    size_t getUse() {return *use; }
    string getStr() { return *ps; }
    ~HasPtr();
private:
    string *ps;
    int i;
    size_t *use;
};

HasPtr::~HasPtr()
{
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;
    if (--*use == 0) {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

#endif
