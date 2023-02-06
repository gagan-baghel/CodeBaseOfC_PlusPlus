#include<iostream>
#include<vector>
using namespace std;
//dynamic array
int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(9);
	v.push_back(26);
	v.push_back(4);
	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	for(auto element:v){
		cout<<element <<endl;
	}
	vector<int > v2 (3,50);
	for(auto ele:v2){
		cout<<ele<<" ";
	}
	sort(v.begin(),v.end());
	swap(v,v2);
	for(auto ele:v){
		cout<<ele<<" ";
	}
	for(auto ele:v2){
		cout<<ele<<" ";
	}

	return 0;
	
}