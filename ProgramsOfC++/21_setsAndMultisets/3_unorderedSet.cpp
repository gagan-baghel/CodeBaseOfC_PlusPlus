//implemented using hashing 
// contain unique elements
// not in sorted order
// random access not possible
// present in <unordered_set>


#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int32_t main(){
	unordered_set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	for (auto i : s) cout<<i<<" ";
	cout<<endl;
	cout<<s.size()<<"\n";
	s.erase(2);
	s.erase(s.end());
	for (auto i : s) cout<<i<<" ";
	return 0;
}


// adv
// insert 01
// del 01
// lower bd NA
// upper bd NA