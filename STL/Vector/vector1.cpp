#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<float> v;
	v.assign(4,16.3);
	v[0]=16.4;
	v[3]=20.6;
	v.push_back(17.8);
	v.push_back(-3.5);
	cout<<"\nSize of Vector:"<<v.size();
	
	cout<<"\n\nUsing vector ...\n";
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<"\t";
	}
	cout<<endl<<"Using front and back ...";
	cout<<endl<<v.front()<<"\t"<<v.at(2)<<"\t"<<v.back()<<endl;
	
	vector<float>::iterator it;
	cout<<"\nUsing Iterator ...\n";
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<"\t";
	}
	return 0;
}
