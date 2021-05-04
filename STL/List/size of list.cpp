#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l1{11,22,33};
	list <string> l2{"India","Gujarat","Bharuch","zadeshwar"};
    list <int> :: iterator p=l1.begin();                               //use of Iterator
    while(p!=l1.end())
    {
    	cout<<*p<<" ";
    	p++;
	}
	cout<<"\nTotal values in the list are "<<l1.size();
}
