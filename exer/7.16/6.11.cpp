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
void printCommon(vector<int> v1, vector<int> v2) {
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
}
int main() { 
    vector<int> v({1,3,4});
    vector<int> v2({1,2, 4});
    printCommon(v, v2);
}