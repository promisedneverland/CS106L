#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

bool getBoolean() {
    string line;
    bool b;
    while(getline(cin, line)) {
        istringstream stream(line);
        // cout << line << endl;
        cout << stream.str();
        char c;
        if(stream >> boolalpha >> b >> ws) {
            
            if(stream.eof()) {
                return b;
            } else {
                cerr << "remaining" << endl;
            }
        } else {
            cerr << "wrong format" << endl;
        }
    }
}
int main() {
    cout << getBoolean() << endl;
}