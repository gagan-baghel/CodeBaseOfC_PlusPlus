#include<iostream>
//pairs
#include<vector>
using namespace std;
bool myCompare(pair<int,int > p1,pair<int ,int > p2){
	if(p1.first==p2.first) return p1.second<p2.second;
	return p1.first<p2.first;

}

int main(){
	int arr[8]={10,16,7,14,5,3,12,9};
	vector <pair<int,int> > v;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		v.push_back(make_pair(arr[i],i));
	}

	sort(v.begin(),v.end(),myCompare);//compatitor function which decide behaviour of sorting 
	for(int i=0;i<v.size();i++){
		arr[v[i].second]= i+1;

	}
	for(int i=0;i<v.size();i++){
		cout<<arr[i]<<" ";
		
	}


}