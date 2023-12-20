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
double median(vector<int>& s) {
    if(s.size() % 2 == 0) {
        nth_element(s.begin(), s.begin() + s.size() / 2, s.end());
        int right = s[s.size() / 2];
        nth_element(s.begin(), s.begin() + s.size() / 2 - 1, s.end());
        int left = s[s.size() / 2 - 1];
        return (right + left) / 2;
    } else {
        nth_element(s.begin(), s.begin() + s.size() / 2, s.end());
        return s[s.size() / 2];
    }
}
int main() { 
    vector<int> s({2,3,4,5,6});
    cout << median(s) << endl;
}