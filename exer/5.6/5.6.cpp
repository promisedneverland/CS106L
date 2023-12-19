#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

// void openFile(ifstream& is) {
//     while(true) {
//         cout << "Enter File Name" << endl;
//         string line;
//         getline(cin, line);
//         is.open(line);
//         if(is.is_open()) {
//             return;
//         }
//         is.clear();
//     }
// }
vector<int> getNumbers(string file) {
    ifstream is;
    is.open(file);
    vector<int> res;
    if(!is.is_open()) {
        cout << "Fail" << endl;
        return res;
    }
    int i;
    while(is >> i) {
        res.push_back(i);
    }
    is.close();
    return res;
}
int maxIndex(vector<int>& vec, int left, int right) {
    int maxValue = INT_MIN;
    int ret = 0;
    for(int i = left; i < right; i++) { 
        if(vec.at(i) > maxValue) {
            maxValue = vec.at(i);
            ret = i;
        }
    }
    return ret;
}
void InsertionSort(vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        swap(vec[i], vec[maxIndex(vec, i, vec.size())]);
    }
    
}
int main() {
    vector<int> vec = getNumbers("5.6/test.txt");
    InsertionSort(vec);
    for(int i : vec) {
        cout << i << endl;
    }
}