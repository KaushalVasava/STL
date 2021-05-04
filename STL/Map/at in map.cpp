#include<iostream>
#include<map>
using namespace std;
int main()
{
	map <int,string> c1;
	c1[100]="Kaushal";
    c1[123]="Aaradhya";
    c1[145]="Jigar";
    c1[171]="Kashish";
    c1[200]="Mummi";
    
	 /*
     map <int,string> c2{{100,"Kaushal"},{123,"Aaradhya"},{145,"Jigar"},{171,"Kashish"},{200,"Mummi"}};
     */
     
	map <int,string> :: iterator p=c1.begin();                               //use of Iterator
    while(p!=c1.end())
    {
    	cout<<p->first<<"\t"<<p->second<<endl;
    	p++;
	}
	cout<<c1.at(100);
}
