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
#include<iterator>
#include<numeric>
using namespace std;
const size_t N = 3;
string getValue(pair<string, double> p) {
    return p.first;
}
set<string> criticsPick(map<string, double> m) {

    set<string> res;
    map<string, double>::reverse_iterator stop = m.rbegin();

    size_t numberPicked = min(N, m.size());
    for(int i = 0; i < numberPicked; i++) {
        stop++;
    }
    transform(m.rbegin(), stop, inserter(res, res.begin()), getValue);
    return res;
}
int main() { 
    map<string, double> m;
    m["7"] = 7;
    m["1"] = 1;
    m["2"] = 2;
    m["3"] = 3;
    m["4"] = 5;
    m["6"] = 6;
    set<string> s = criticsPick(m);
    copy(s.begin(), s.end(), ostream_iterator<string>(cout, "\n"));
}