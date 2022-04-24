#include <iostream>
#include <cstring>
#include <string>
#include "TString.h"

int main() {

    TString str("hello");
    TString str2("hey");
    cout << str[1] << endl;
    cout << "result comparison:  ";
    bool comparison = str > str2;


    TString str5;
    TString str6;
    cout << "_________________" << "\n" << "enter the strings to compare for equality" << endl;
    cin >> str5 >> str6;
    bool equal = str5 == str6;


    return 0;
}