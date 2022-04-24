#pragma once
#include <iostream>
using namespace std;

class TString {
private:
    char* str;
    static const int CINLIM = 100;
    int lenght;
public:
    TString();
    TString(const char* str);
    ~TString();
    TString(const TString& other);
    // ŒÕ—“–” “Œ– œ–»—¬¿»¬¿Õ»ﬂ
    TString& operator = (const TString& other);
    // ŒÕ—“–” “Œ– —ÀŒ∆≈Õ»ﬂ  
    TString operator +(const TString& other);
    char& operator[](int i);
    friend ostream& operator<<(ostream& os, const TString& st2);
    friend istream& operator>>(istream&, TString&);
    friend bool operator<(const TString& st, const TString& st2);
    friend bool operator>(const TString& st1, const TString& st2);
    int Lenght();
    bool operator ==(const TString& other);
};