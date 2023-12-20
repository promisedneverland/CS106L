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
#include<map>
#include<iterator>
#include<numeric>
using namespace std;
string MonoalphabeticSubstitutionEncrypt(string text) {
    
    srand(time(0));
    vector<int> alphabet;
    for(int i = 0; i < 26; i++) {
        alphabet.push_back(i);
    }
    random_shuffle(alphabet.begin(), alphabet.end());
    string res = "";
    for(int i = 0; i < text.length(); i++) {
        int index = text[i] - 'a';
        res += alphabet[index] + 'a';
    }
    return res;
}
int main() { 
    cout << MonoalphabeticSubstitutionEncrypt("cookie") << endl;
}