#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

void openFile(ifstream& is) {
    while(true) {
        cout << "Enter name of file" << endl;
        string line;
        getline(cin, line);
        is.open(line);
        if(is.fail()) {
            is.clear();
            cerr << "fail" << endl;
        } else {
            return;
        }

    }
}
int main() {
    int n;
    // cin >> n;
    ifstream is;
    openFile(is);
    string line;
    is >> line;
    cout << line << endl;
}