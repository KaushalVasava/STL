#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    char str[]="Hello";
    string s2=str;
    string s3=s2;  //string s3(s2);
    cout<<s3;
}
