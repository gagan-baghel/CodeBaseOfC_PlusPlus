#include<iostream>
#include<deque>
using namespace std;
class SStack{
	deque<int> dq;
	public:
	void pushd(int x){
		dq.push_back(x);
	}
	void popd(){
		dq.pop_back();
	}
	bool isempty(){
		return dq.empty();
	}
	
};
int main(){
	SStack st;
	st.pushd(1);
	st.pushd(2);
	st.pushd(3);
	st.pushd(4);
	st.pushd(5);
	st.popd();
	
	return 0;
}