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

int main() { 
    int i;
    multiset<int> s;
    while(cin >> i) {
        s.insert(i);
    }
    for(auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << endl;
    }

}