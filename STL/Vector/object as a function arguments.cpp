#include<iostream>
using namespace std;
class time
{
    int hours;
	int minutes;
  public:
    void gettime(int h,int m)
	{
		hours=h;
		minutes=m;
    }
	void puttime()
	{
		cout<<hours<<"hours and ";
		cout<<minutes<<"minutes"<<endl;
	}
	void sum(time,time);		
};
void time::sum(time t1,time t2)
{
	minutes=t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+t1.hours+t2.hours;
}
int main()
{
	time x1,x2,x3;
	x1.gettime(2,45);
	x2.gettime(3,30);
	x3.sum(x1,x2);
	
	cout<<"x1=";
	x1.puttime();
		cout<<"x2=";
	x2.puttime();
		cout<<"x3=";
	x3.puttime();
	return 0;
}

