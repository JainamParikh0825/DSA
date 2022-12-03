#include<iostream>
using namespace std;

int main(){
    /* Strings */
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;

    /* Comparison Lexicograhically */
    if(s > t) cout << u << endl;

    s = "John";
    int i = s.size(); // size of string
    char c = s[3]; // grabing last character
    s += " Smith";
    cout << s << endl;
    return 0;
}