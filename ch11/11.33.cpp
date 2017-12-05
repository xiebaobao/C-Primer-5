/*************************************************************************
	> File Name: 11.33.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 04:17:32 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream> // istringstream
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::ifstream;
using std::istringstream;
using std::getline;


map<string, string> build_map(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key && getline(map_file, value)) {
        trans_map[key] = value.substr(1);// 跳出前导空格
    }
    return trans_map;
}

string transform(string word, map<string, string> trans_map)
{
    auto map_it = trans_map.find(word);
    if (map_it == trans_map.end()) 
        return word;
    else
        return map_it->second;
}

void word_transform(ifstream &map_file, ifstream &input_file)
{
    auto trans_map = build_map(map_file);
    string text;
    while (getline(input_file, text)) {
        istringstream stream(text);
        string word;
        while (stream >> word) {
            cout << transform(word, trans_map) << " ";
        }
        cout << endl;
    }
}

int main()
{
    ifstream map_file("./11.33.map.txt");
    ifstream input_file("./11.33.input.txt");
    word_transform(map_file, input_file);
    return 0;
}
