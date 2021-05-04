#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l1{55,25,6,88,7};
	
    list <int> :: iterator p=l1.begin();                               //use of Iterator
    while(p!=l1.end())
    {
    	cout<<*p<<" ";
    	p++;
	}
	cout<<endl;
	l1.clear();
    list <int> :: iterator q=l1.begin();                               //use of Iterator
    while(q!=l1.end())
    {
    	cout<<*q<<" ";
    	q++;
	}
	cout<<endl;

}
