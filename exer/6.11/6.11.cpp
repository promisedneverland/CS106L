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
using namespace std;
const int TRIALS = 100;
const int FACE = 365;
const int TIMES = 2;

int roll() {
    return rand() % FACE;
}

int trial() {
    multiset<int> results;
    while(true) {
        int side = roll();
        results.insert(side);
        if(results.count(side) == TIMES) {
            return results.size();
        }
    }
}

int main() { 
    srand(time(0));

    int total = 0;
    for(int i = 1; i <= TRIALS; i++) {
        total += trial();
    }    
    cout << total / TRIALS << endl;
}