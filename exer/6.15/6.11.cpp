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

multimap<string, string> invertMap(map<string,string> m) {
    multimap<string, string> mm;
    for(pair<string, string> p : m) {
        mm.insert(make_pair(p.second, p.first));
    }
    return mm;
}
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
bool isPossible(map<string, string> m) {
    return NumberDuplicateEntries(m) == 0;
}
int main() { 
    map<string, string> m;
    m["1"] = "hi";
    m["2"] = "hi";
    m["3"] = "hi";
    m["4"] = "frank";
    m["5"] = "no";
    m["6"] = "no";

    map<string, string> m2;
    m2["6"] = "no";
    cout << boolalpha << isPossible(m) << endl;
    cout << boolalpha << isPossible(m2) << endl;
    for(pair<string, string> p : invertMap(m)) {
        cout << p.first << p.second << endl;
    }
}