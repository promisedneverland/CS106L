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

bool compareStr(string s1, string s2) {
    if(s1 == "Me First") {
        return true;
    }
    if(s2 == "Me First"){ 
        return false;
    }
    return s1.compare(s2);
}
void biasedSort(vector<string>& v) {
    sort(v.begin(), v.end(), compareStr);
}
int main() { 
    vector<string> v({"hi","Me First", "Hello", "aaa"});
    biasedSort(v);
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
}