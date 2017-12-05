#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::string;
using std::vector;

class GetString {
public:
    GetString(istream &i = cin) : is(i) {}  // 默认设置读取流是cin
    string operator()() const {
        string text;
        getline(is, text);
        return is ? text : string();
    }

private:
    istream &is;  // 用于读取的目的流
};

void print_vec(vector<string> vec)
{
    for (auto p = vec.begin(); p != vec.end(); ++p) {
        cout << *p << endl;
    }
}

int main()
{
    GetString getString; // 函数对象
    // 练习14.35
    //cout << getString() << endl;

    // 练习14.36
    vector<string> vec;
    string line;
    while (!(line = getString()).empty()) {
        vec.push_back(line);
    }
    print_vec(vec);
    return 0;
}
