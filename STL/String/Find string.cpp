#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello online online students";
    int i=s1.find("online");
    cout<<i<<endl;
    int j=s1.rfind("online");
    cout<<j<<endl;
    int k=s1.find("kaushal");
    cout<<k;
}
