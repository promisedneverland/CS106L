#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<vector>
#include<deque>
#include<ctime>
using namespace std;

string encript(const string& test, const vector<int>& key) {
    string res = "";
    for(int i = 0; i < test.length(); i++) {
        res += char((test[i] - 'A' + key[i % key.size()]) % 26) + 'A';
    }
    return res;
}
int main() { 
    vector<int> key({1, 3, 7});
    string text = "THECOOKIE";
    cout << encript(text, key) << endl;

}