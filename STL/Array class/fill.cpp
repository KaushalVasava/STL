#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,5> obj;
	obj.fill(7);
	for(int i=0;i<5;i++)
	   cout<<obj[i]<<" ";
	return 0;
}
