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

double dist(const vector<double>& v) {
    double square = inner_product(v.begin(), v.end(), v.begin(), 0.0);
    return sqrt(square);
}
int main() { 
    vector<double> v({3,4});
    cout << dist(v) << endl;
}