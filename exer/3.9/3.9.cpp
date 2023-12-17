#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

bool hasHexLetters(int n) {
    //transform n into hex string
    stringstream stream;
    stream << hex << n;
    string hexN;
    stream >> hexN;
    cout << hexN << endl;
    //transform if the hex string can be transformed into dec
    stringstream stream2;
    stream2 << hexN;
    if(stream2 >> dec >> n){
        // cout << n << endl;
        if(stream2 >> ws && stream2.eof()) {
            return true;
        } else {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    cout << boolalpha << hasHexLetters(n) << endl;
}