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
set<int> Intersect(set<int> s1, set<int> s2) {
    set<int> res;
    for(int i : s1) {
        if(s2.count(i)) {
            res.insert(i);
        }
    }
    return res;
}
int main() { 
    set<int> s1({1, 2 ,3 });
    set<int> s2({1, 2 ,4 });
    for(int i : Intersect(s1, s2)) {
        cout << i << endl;
    }
}