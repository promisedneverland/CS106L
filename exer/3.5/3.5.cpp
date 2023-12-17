#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

double getReal() {
    double d;
    string line;
    while(getline(cin, line)) {
        istringstream stream(line);
        if(stream >> d) {
            if(stream.eof()) {
                return d;
            } else {
                cerr << "remaining" << endl;
            }
        } else {
            cerr << "incorrect format" << endl;
        }
    }
    return 0;
}
int main() {
    double d = getReal();
    cout << d << endl;
}