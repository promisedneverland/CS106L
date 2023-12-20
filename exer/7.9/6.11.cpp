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

int main() { 
    vector<string> v({"hi","Me First", "Hello", "aaa"});
    biasedSort(v);
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
}