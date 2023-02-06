#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> mix(queue<int > q, int n){
	queue<int > q1;
	queue<int > q2;
	while(n){
		int k = q.front();
		q.pop();
		q1.push(k);
		n--;
	}
	q2=q;
	while(q.size()!=0){
		q.pop();
	}
	int i=0;
	while(!q2.empty()){
		if(i%2==0){
			q.push(q1.front());
			q1.pop();
		}
		else{
			q.push(q2.front());
			q2.pop();
		}
		i++;
	}
	return q;
}
int main(){
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	q1.push(6);
	q1.push(7);
	q1.push(8);
	int n = q1.size()/2;
	queue<int> ans =mix(q1,n);
	while(!ans.empty()){
		cout<<ans.front();
		ans.pop();
	}
	
	

	return 0;
}