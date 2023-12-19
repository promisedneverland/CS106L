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
int lower = 1;
int upper = 3;
void closed(set<int> s) {
    for(set<int>::iterator iter = s.lower_bound(lower); iter != s.upper_bound(upper); iter++) {
        cout << *iter << endl;
    }
    cout << endl;
}
void leftOpen(set<int> s) {
    for(set<int>::iterator iter = s.upper_bound(lower); iter != s.upper_bound(upper); iter++) {
        cout << *iter << endl;
    }
    cout << endl;
}
void rightOpen(set<int> s) {
    for(set<int>::iterator iter = s.lower_bound(lower); iter != s.lower_bound(upper); iter++) {
        cout << *iter << endl;
    }
    cout << endl;
}
int main() { 
    set<int> s({1, 2, 3});
    closed(s);
    leftOpen(s);
    rightOpen(s);
}