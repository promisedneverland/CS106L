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

bool isShort(string s) {
    return s.length() <= 3;
}
void RemoveShortWords(vector<string>& v) {
    v.erase(remove_if(v.begin(), v.end(), isShort), v.end());
}
int main() { 
    vector<string> v({"hello", "hi", "why", "!!!!!"});
    RemoveShortWords(v);
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
}