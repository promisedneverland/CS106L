#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

void draw(int height, char c) {
    for(int i = 1; i <= height; i++) {
        int widthStar = 2 * i - 1;
        int widthBlank = height - i;
        cout << setfill(' ') << setw(widthBlank) << "";
        cout << setfill(c) << setw(widthStar) << "";
        cout << setfill(' ') << setw(widthBlank) << "";
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    draw(n, '#');
}