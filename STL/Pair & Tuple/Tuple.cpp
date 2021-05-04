#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <string,string,string> t;
	t=make_tuple("Nizamvadi no2","Zadeshwar","Bharuch");
	cout<<"Address: ";
	cout<<get<0>(t)<<",";
	cout<<get<1>(t)<<",";
	cout<<get<2>(t)<<".";  
	return 0;
}
