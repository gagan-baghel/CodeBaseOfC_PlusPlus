#include <iostream>
using namespace std;
int main() {
	int t ;
	cin>>t;
	while(t--){
		int horr,vert;
		cin>>horr;
		cin>>vert;
		horr-=1;vert-=1;
		int arr1[horr],arr2[vert];
		for(int i=0;i<horr;i++) cin>>arr1[i];
		for(int i=0;i<vert;i++) cin>>arr2[i];
		sort(arr1,arr1+horr,greater<int>());
		sort(arr2,arr2+vert,greater<int>());
		int price=0;
		int h=1,v=1;
		int i=0,j=0;
		while(i<horr and j<vert){
			if(arr1[i]>arr2[j]){
				price+=arr1[i]*h;
				v++;
				i++;}
			else{
				price+=arr2[j]*v;
				h++;
				j++;}}	
		int total = 0;
    	while (i<horr)
        total += arr1[i++];
    	price += total * v;
    	total = 0;
    	while (i<vert)
        total += arr2[j++];
    	price += total * h;
	cout<<price;
	}
	return 0;
}

