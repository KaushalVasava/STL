#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,5> obj1={11,22,33,44,55};
	array <int,5> obj2={1,2,3,4,5};
    obj1.swap(obj2);
    for(int i=0;i<5;i++)
       cout<<obj1[i]<<" ";
    cout<<endl;
	for(int i=0;i<5;i++)
	   cout<<obj2[i]<<" ";   
	return 0;
}
