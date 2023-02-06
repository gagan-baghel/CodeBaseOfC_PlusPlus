//allow duplicate
// apply in balance bst ;
// sorted order 
// no random access



#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int32_t main(){
	multiset<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(3);
	s.insert(3);
	s.insert(3);
	s.insert(4);
	for (auto i : s) cout<<i<<" ";
	cout<<endl;
	cout<<s.size()<<"\n";
	// s.erase(3);//all repetation will be deleted 
	s.erase(s.find(3));//   delete first 3

	// s.erase(s.end());
	for (auto i : s) cout<<i<<" ";
	return 0;
}