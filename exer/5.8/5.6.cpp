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
const int N = 10000;
const string str = "HEllo, wolrd";

void testInsert(vector<string> & vec) {
    for(int i = 0 ; i < N; i++) {
        vec.push_back(str);
    }
}
void testInsert(deque<string> & vec) {
    for(int i = 0 ; i < N; i++) {
        vec.push_back(str);
    }
}
void testInsertFront(vector<string> & vec) {
    for(int i = 0 ; i < N; i++) {
        vec.insert(vec.begin(), str);
    }
}
void testInsertFront(deque<string> & vec) {
    for(int i = 0 ; i < N; i++) {
        vec.push_front(str);
    }
}
int main() {
    vector<string> resVec;
    vector<string> vec;
    deque<string> dq;
    resVec.reserve(20000);

    clock_t startTime = clock();
    testInsert(resVec);
    clock_t endTime = clock();
    cout << "Res" << endTime - startTime << endl;

    startTime = clock();
    testInsert(vec);
    endTime = clock();
    cout << "vec" << endTime - startTime << endl;

    startTime = clock();
    testInsert(dq);
    endTime = clock();
    cout << "Dq" << endTime - startTime << endl;

    cout << endl << "Push Front" << endl;

    resVec.clear();
    dq.clear();
    vec.clear();

    startTime = clock();
    testInsertFront(resVec);
    endTime = clock();
    cout << "Res" << endTime - startTime << endl;

    startTime = clock();
    testInsertFront(vec);
    endTime = clock();
    cout << "vec" << endTime - startTime << endl;

    startTime = clock();
    testInsertFront(dq);
    endTime = clock();
    cout << "Dq" << endTime - startTime << endl;

}