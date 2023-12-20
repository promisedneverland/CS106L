#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<vector>
#include<deque>
#include<ctime>
#include<set>
#include<map>
using namespace std;
int NumberDuplicateEntries(map<string, string> m) {
    multiset<string> values;
    set<string> strings;
    int cnt = 0;
    for(pair<string, string> p : m) {
        values.insert(p.second);
        strings.insert(p.second);
    }
    for(string s : strings) {
        if(values.count(s) > 1) {
            cnt += values.count(s);
        }
    }
    return cnt;
}
int main() { 
    map<string, string> m;
    m["1"] = "hi";
    m["2"] = "hi";
    m["3"] = "hi";
    m["4"] = "frank";
    m["5"] = "no";
    m["6"] = "no";
    cout << NumberDuplicateEntries(m) << endl;
}