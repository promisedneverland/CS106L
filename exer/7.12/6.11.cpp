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
int genRand() {
    return rand();
}
void populate(vector<int>& v, int n) {
    srand(time(0));
    generate_n(back_insert_iterator<vector<int>>(v), n, genRand);
}
int main() { 
    vector<int> v;
    populate(v, 10);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}