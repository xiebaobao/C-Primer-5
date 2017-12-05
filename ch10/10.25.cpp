/*************************************************************************
	> File Name: 10.16.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Tue 28 Nov 2017 03:22:27 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional> //bind
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::stable_sort;
using std::partition;
using std::placeholders::_1;

bool check_size(const string s, string::size_type sz)
{
    return s.size() > sz;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());

}

void biggies(vector<string> &words,
             vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string s1, const string s2)
               { return s1.size() < s2.size(); });
    //auto wc = find_if(words.begin(), words.end(), [sz](const string s){ return s.size() >= sz; });

    //使用partition 代替 find_if 
    //auto wc = partition(words.begin(), words.end(), [sz](const string s){ return s.size() >= sz; });
    
    //使用bind 和 check_size 
    auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));

    auto count = words.end() - wc;
    cout << count << " " << (count > 1 ? "words" : "word")
        << " of length" << sz << " or longer" << endl;
    for_each (wc, words.end(), [](const string s){ cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(words, 4);
}
