/*************************************************************************
	> File Name: 14.38.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 05 Dec 2017 02:12:54 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;

class LenComp {
public:
    LenComp(int l) : length(l) {}
    bool operator()(string s){
        return s.size() == length;
    }
private:
    int length;
};

int main()
{
    vector<LenComp> vec;
    for (int i = 1; i <= 10; i++) {
        vec.push_back(LenComp(i));
    }
    int count_table[10] = {0};
    string word;
    ifstream fs("./14.35.cpp");
    while (fs >> word) {
        for(auto i: vec) {
            if(i(word)) {
                ++count_table[word.size() - 1];
                break;
            }
        }
    }
    
    for (auto i = 0; i < 10; ++i) {
        cout << "the count of word length equal " << i + 1 << " :" << count_table[i] << endl;

    }
    return 0;
}
