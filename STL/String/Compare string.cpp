#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Amar";
    string s2="Amit";
    int i=s1.compare(s2);
    cout<<i<<endl;
     string s3="Amit";
    string s4="Amit";
    int j=s3.compare(s4);
    cout<<j<<endl;
    string s5="amar";
    string s6="Amit";
    int k=s5.compare(s6);
    cout<<k;
}
