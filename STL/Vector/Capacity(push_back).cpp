#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v1;
	cout<<v1.capacity()<<endl;
	  v1.push_back(10);
	  cout<<v1.capacity()<<endl;
	  v1.push_back(12);
	  cout<<v1.capacity()<<endl;
	  v1.push_back(13);
	  cout<<v1.capacity()<<endl;	
	return 0;
}
