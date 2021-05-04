#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello";
    s1.replace(1,2,"A");
    cout<<s1;
    string s2="Hello";
    s2.replace(1,3,"Kumar");
    cout<<"\n"<<s2;
}
