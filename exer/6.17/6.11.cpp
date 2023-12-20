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

void PrintMatchingPrefixes(set<string> s, string prefix) {
    string upperPrefix = prefix;
    upperPrefix[upperPrefix.length() - 1]++;
    for(auto iter = s.lower_bound(prefix); iter != s.lower_bound(upperPrefix); iter++) {
        cout << *iter << endl;
    }
}

int main() { 
    set<string> s({"abc", "abd", "zzz", "a", "aaa", "acx", "ab", "ac"});
    PrintMatchingPrefixes(s, "ab");
}