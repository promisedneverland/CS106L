#include<iostream>
#include<string>
// #include<fstream>
// // #include<iomanip>
// #include<sstream>
using namespace std;


#define prefix eLengthUnit_

enum Unit {
    #define DEFINE_UNIT(name, meter, suffix, system) prefix##suffix,
    #include"units.h"
    #undef DEFINE_UNIT
    ERROR,
};
struct Length {
    double d;
    Unit unit;
}

Length readLength(double d, string suf) {
    while(true) {
        
    }
}
// string toString(Unit c) {
//     switch (c)
//     {
//     #define DEFINE_UNIT(name, meter, suffix, system) case #: return #Unit;
//     #include"units.h"
//     #undef DEFINE_UNIT
//     default:
//         return "";
//     }
// }

Unit toUnit(string suf) {
    #define DEFINE_UNIT(name, meter, suffix, system) if(#suffix == suf) return prefix##suffix;
    #include"units.h"
    #undef DEFINE_UNIT

    return ERROR;
}
// Unit getOppo(Unit c) {
//     switch (c)
//     {
//     #define DEFINE_UNIT(name, meter, suffix, system) case Unit: return opposite;
//     #include"units.h"
//     #undef DEFINE_UNIT
//     default:
//         return c;
//     }
// }
int main() {
    // cout << toString(Red) << endl;
    cout << toUnit("cm") << endl;
}