#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
void CursorClockwise(deque<int>& dq) {
    int front = dq.front();
    dq.pop_front();
    dq.push_back(front);
}
void CursorCounterClockwise(deque<int>& dq) {
    int back = dq.back();
    dq.pop_back();
    dq.push_front(back);
}
void print(deque<int>& dq) {
    for(int i : dq) {
        cout << i << endl;
    }
    cout << endl;
}
void write(deque<int>& dq, int i) {
    dq[0] = i;
}
int read(deque<int>& dq)  {
    return dq[0];
}
int main() {
    deque<int> dq({1,2,3});
    print(dq);
    CursorClockwise(dq);
    print(dq);
    CursorCounterClockwise(dq);
    print(dq);
    write(dq, 10);
    cout << read(dq) << endl;
}