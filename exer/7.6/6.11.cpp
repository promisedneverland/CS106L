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
#include<numeric>
using namespace std;

double getAverage(multiset<int> s) {
    return accumulate(s.begin(), s.end(), 0.0) / s.size();
}

double getAverageBetween(multiset<int> s, int low, int up) {
    multiset<int>::iterator start = s.lower_bound(low);
    multiset<int>::iterator stop = s.upper_bound(up);
    return accumulate(start, stop, 0.0) / distance(start, stop);
}
int main() { 
    multiset<int> s;
    ifstream is("7.6/test.txt");
    int i;
    while(is >> i) {
        s.insert(i);
    }
    cout << getAverage(s) << endl;
    cout << getAverageBetween(s, 1, 5) << endl;
}