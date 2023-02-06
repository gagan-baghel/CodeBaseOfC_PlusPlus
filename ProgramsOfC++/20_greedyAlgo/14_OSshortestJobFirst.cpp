#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

class tool{public:
	int x;
	int y;
	int z;

};


bool comp(vector<tool> &a ,vector<tool> &b){
	if(a.x==b.x) return a.y<b.y;;
	return a.x<b.x;
}


void shortestTime(int ari[],int bst[], int n){
	vector <vector<int> > v(n);
	for (size_t i = 0; i < n; i++){
		a[i][0]=ari[i];
		a[i][1]=bst[i];
		a[i][2]=i;
	}
	sort(a,(a+n),comp);
	for (size_t i = 0; i < n; i++)	cout<<a[i].x<<" "<<a[i].y<<" "<<a[i].z<<endl;
	}




int main(){
	int ari[]={2,2,4,5};
	int bst[]={3,4,2,4};
	shortestTime(ari,bst,4);
	return 0;
}