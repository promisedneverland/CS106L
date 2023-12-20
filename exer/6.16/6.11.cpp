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

map<string, string> compose(map<string, string> m1, map<string, string> m2) {
    map<string, string> res;
    for(pair<string, string> p : m1) {
        if(m2.find(p.second) != m2.end()) {
            res[p.first] = m2[p.second];
        }
    }
    return res;
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
    m2["no"] = "thanks";
    m2["hi"] = "holo";
    for(auto p : compose(m, m2)) {
        cout << p.first << p.second << endl;
    }
}