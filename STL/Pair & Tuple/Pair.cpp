#include<iostream>
using namespace std;
class student
{
	   string name;
	   int age;
	public:
	   void setStudent(string s,int a)
	   {
	   	    name=s;
	   	    age=a;
	   }    
	   void showStudent()
	   {
	   	   cout<<"\nName: "<<name;
	   	   cout<<"\nAge: "<<age;
	   }
};
int main()
{
	pair <string,int> p1;
	pair <string,string> p2;
	pair <int,student> p3;
	 
	 p1=make_pair("Aaradhya",3);
	 p2=make_pair("India","New Delhi");
	 student s1;
	 s1.setStudent("Kaushal",19);
	 p3=make_pair(1,s1); 
	cout<<"Pair 1"<<endl;
	 cout<<p1.first<<" "<<p1.second;
	cout<<"\nPair 2"<<endl;
	 cout<<p2.first<<" "<<p2.second;
	cout<<"\nPair 3"<<endl;
	 cout<<p3.first<<" ";
	student s2=p3.second;
	s2.showStudent();    
	return 0;
}
