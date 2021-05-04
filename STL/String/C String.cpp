#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s1="Kaushal";
    char str[20];
    strcpy(str,s1.c_str());
    cout<<str;
}
