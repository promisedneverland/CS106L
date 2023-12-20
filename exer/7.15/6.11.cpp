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
void writeFile(string file, vector<int> v) {
    ofstream os(file);
    copy(v.begin(), v.end(), ostream_iterator<int>(os, "\n"));
}
int main() { 
    vector<int> v({1,2,3,4});
    writeFile("7.15/test.txt", v);
}