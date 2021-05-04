#include<iostream>
using namespace std;
class result
{
   	char name[30];
   	int mark[3];
   	float per;
   	int sum;
  public:
    void setdata();
	void showdata();
	void percent();
};
void result::setdata()
{
	sum=0;
	cout<<"Enter the students name:";
	cin>>name;
	cout<<"\nEnter the marks of students:";
	for(int j=0;j<3;j++)
	{
		cin>>mark[j];
	}
}	
void result::percent()
{
	for(int k=0;k<3;k++)
	{
		sum=sum+mark[k];
		per=sum/3.0;
	}
	cout<<"\nPercentage:"<<per;
}
void result::showdata()
{
	cout<<"\nstudents name:"<<name;
	for(int j=0;j<3;j++)
	{
		cout<<"\nsubject:"<<j+1;
		cout<<"\nMarks:"<<mark[j];
	}
}
const int size=3;
int main()
{
	result student[size];
	for(int i=0;i<3;i++)
	{
		cout<<"\nDetails of students:"<<i+1<<endl;
		student[i].setdata();
		
	}
 for(int k=0;k<3;k++)
 { 
	cout<<"\nstudent:"<<k+1;
	student[k].showdata();
	student[k].percent();
	cout<<"\n";
 }
 return 0;
}
