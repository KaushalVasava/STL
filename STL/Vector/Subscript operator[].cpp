#include<iostream>
#include<vector>
using namespace std;
int main()
{
//	vector <int> v1={11,23,33};
	vector <char> v2(4);
	vector <int> v3(5,10);
	vector <string> v4(3,"kaushal");
	for(int i=0;i<3;i++)
	  cout<<v3[i]<<endl;
	return 0;
}
