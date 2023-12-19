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
using namespace std;
set<int> Union(set<int> s1, set<int> s2) {
    set<int> res = s1;
    res.insert(s2.begin(), s2.end());
    return res;
}
int main() { 
    set<int> s1({1, 2 ,3 });
    set<int> s2({1, 2 ,4 });
    for(int i : Union(s1, s2)) {
        cout << i << endl;
    }
}