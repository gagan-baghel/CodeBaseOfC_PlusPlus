// #include <iostream>
// using namespace std;


// int xorfibbo(int n){
//     if(n<=1) return n;

//      return xorfibbo(n-1)^ xorfibbo(n-2);
// }

// int main(){

//     cout<<xorfibbo(2);

//     return 0;

// }


#include <iostream>
using namespace std;

int ret(int a ,int b , int n){
    if(n==0) return a;
    if(n==1) return b;
    
    return ret( a , b , n-1) ^ret( a , b , n-2) ;
}
int main() {
        int a ,b,c;
        cin>>a>>b>>c;
	    cout<<ret( a , b , c);   

	
	
	return 0;
}