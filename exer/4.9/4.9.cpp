#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;


enum color {
    #define DEFINE_COLOR(color, opposite) color,
    #include"color.h"
    #undef DEFINE_COLOR
    NOT_A_COLOR,
};
string toString(color c) {
    switch (c)
    {
    #define DEFINE_COLOR(color, opposite) case color: return #color;
    #include"color.h"
    #undef DEFINE_COLOR
    default:
        return "";
    }
}

color toColor(string c) {
    #define DEFINE_COLOR(color, opposite) if(#color == c) return color;
    #include"color.h"
    #undef DEFINE_COLOR

    return NOT_A_COLOR;
}
color getOppo(color c) {
    switch (c)
    {
    #define DEFINE_COLOR(color, opposite) case color: return opposite;
    #include"color.h"
    #undef DEFINE_COLOR
    default:
        return c;
    }
}
int main() {
    cout << toString(Red) << endl;
    cout << toColor("Green") << endl;
}