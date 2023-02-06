#include<iostream>//dynamic programming 
using namespace std;
int catalan(int n){
	if(n<=1) return 1;
	int res=0;
	for(int i=0;i<n;i++){
		res+=catalan(i)*catalan(n-i-1);
	}
	return res;
}
int main(){
	int n=20,i=0;
	while(i<n){
		cout<<catalan(i)<<endl;
		i++;
	}
	return 0;
}
// possible bst;
// paranthesis / bracket combination
// possible forests;
// way of traiangulations 
// possible paths of matrix
// dividing a circle using n cords;
// ync words of given length  