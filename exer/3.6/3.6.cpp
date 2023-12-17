#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

string intToString(int i) {
    ostringstream stream;
    stream << i;
    return stream.str();
}
int main() {
    cout << intToString(5123) << endl;
}