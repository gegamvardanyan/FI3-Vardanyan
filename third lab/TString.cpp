#include "TString.h"
#include <iostream>
#include <cstring>
#include <string>

TString::TString()
{
	str = nullptr;
	lenght = 0;
}

TString::TString(const char* str)
{
    lenght = strlen(str);
    this->str = new char[lenght + 1];
    for (int i = 0; i < lenght; i++)
    {
        this->str[i] = str[i];
    }
    this->str[lenght] = '\0';
}

TString::~TString()
{
    delete[] this->str;
}

TString::TString(const TString& other)
{
    lenght = strlen(other.str);
    this->str = new char[lenght + 1];

    for (int i = 0; i < lenght; i++) {
        this->str[i] = other.str[i];
    }
    this->str[lenght] = '\0';
}

TString& TString::operator=(const TString& other)
{
    if (this->str != nullptr) {
        delete[] str;
    }

    lenght = strlen(other.str);
    this->str = new char[lenght + 1];
    for (int i = 0; i < lenght; i++)
    {
        this->str[i] = other.str[i];
    }
    this->str[lenght] = '\0';
    return *this;
}

TString TString::operator+(const TString& other)
{
    TString newStr;

    int thisLenght = strlen(this->str);
    int otherLenght = strlen(other.str);

    newStr.str = new char[thisLenght + otherLenght + 1];
    int i = 0;
    for (; i < thisLenght; i++)
    {
        newStr.str[i] = this->str[i];
    }
    for (int j = 0; j < otherLenght; j++, i++)
    {
        newStr.str[i] = other.str[j];
    }

    newStr.str[thisLenght + otherLenght] = '\0';

    return newStr;
}

char& TString::operator[](int i)
{
    return str[i];
}

int TString::Lenght()
{
    return lenght;
}

bool TString::operator==(const TString& other)
{
    if (this->lenght != other.lenght)
    {
        cout << "strings are not same" << endl;
        return false;
    }


    for (int i = 0; i < this->lenght; i++)
    {
        if (this->str[i] != other.str[i])
        {
            cout << "strings are not same" << endl;
            return false;
        }
    }

    cout << "strings are same" << endl;
    return true;
}

ostream& operator<<(ostream& os, const TString& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream & is, TString & a)
{
    char* buffer;
    buffer = new char[TString::CINLIM];
    is.getline(buffer, TString::CINLIM);
    a = buffer;
    delete[] buffer;
    return is;
}

bool operator<(const TString& st1, const TString& st2)
{
    if (st1.lenght > st2.lenght) {
        cout << "it false. first string is bigger than second" << endl;
        return false;
    }
    else
        cout << "first string is smaller than second" << endl;
    return true;
}

bool operator>(const TString& st1, const TString& st2)
{
    if (st1.lenght < st2.lenght) {
        cout << "it false. first string is smaller than second" << endl;
        return false;
    }
    else
        cout << "first string is bigger than second" << endl;
    return true;
}


