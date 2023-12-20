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
const size_t N = 3;
int count(vector<int>::iterator start, vector<int>::iterator stop, int element) {
    int cnt = 0;
    for(auto iter = start; iter != stop; iter++) {
        if(element == *iter) {
            cnt++;
        }
    }
    return cnt;
}
int main() { 
    vector<int> v({4,2,3,3,1,1,1});
    cout << count(v.begin(), v.end(), 1) << endl;
}