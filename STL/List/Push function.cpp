#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l1{11,22,33};
	list <string> l2{"India","Gujarat","Bharuch","zadeshwar"};
	l2.push_back("Kaushal");
	l2.push_front("Vasava");
    list <string> :: iterator p=l2.begin();                               //use of Iterator
    while(p!=l2.end())
    {
    	cout<<*p<<" ";
    	p++;
	}
	cout<<"\nTotal values in the list are "<<l2.size();
}
