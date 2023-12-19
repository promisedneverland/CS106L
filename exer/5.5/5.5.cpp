#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;

void openFile(ifstream& is) {
    while(true) {
        cout << "Enter File Name" << endl;
        string line;
        getline(cin, line);
        is.open(line);
        if(is.is_open()) {
            return;
        }
        is.clear();
    }
}
vector<string> Lines(string file) {
    ifstream is;
    openFile(is);
    vector<string> res;
    while(!is.eof() && !is.fail()) {
        string line;
        getline(is, line);
        res.push_back(line);
    }
    is.close();
    return res;
    
}
int main() {
    vector<string> vec = Lines("test.cpp");
    for(string str : vec) {
        cout << str << endl;
    }
}