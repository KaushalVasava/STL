#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v={7 , 5, 16, 8};
	v.push_back(67);
	v.push_back(9);
	
	for(int n:v){
		cout<<n<<endl;
	}
}
