/*************************************************************************
	> File Name: text_query.cpp
	> Author: xtx
	> Mail: 13151562558@163.com 
	> Created Time: Wed 29 Nov 2017 08:08:08 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <memory>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::map;
using std::set;
using std::string;
using std::ostream;
using std::ifstream;

using line_no = vector<string>::size_type;

class QueryResult;
ostream& print(ostream&, const QueryResult&);
class QueryResult {
friend ostream& print(ostream&, const QueryResult&);
public:
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f):
    sought(s), lines(p), file(f) {  }
private:
    string sought;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};

ostream &print(ostream &os const QueryResult &qr)
{
    os << qr.soght << "occurs " << qr.lines->size() << " "
    << (qr.lines->size() > 1 ? "times" : "time") << endl;
    for (auto num : *qr.lines)
        os << "\t(line " << num + 1 << ") "
            << *(qr.file->begin() + num) << endl;
    return os;
}

class TextQuery {
public:
    TextQuery(ifstream&);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file; // 输入文件
    map<string, shared_ptr<set<line_no>>> wm;
};

QueryResult TextQuery::query(const string &sought) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, loc->second, file);
}
