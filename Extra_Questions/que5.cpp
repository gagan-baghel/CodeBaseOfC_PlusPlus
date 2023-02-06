// #include<iostream>
// #include<stdio.h>
// using namespace std;


// int rearrange(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
// }
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// int main()
// {
//     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     rearrange(arr, n);
//     printArray(arr, n);
//     return 0;
// }

itersection


#include <iostream>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       //code here
       sort(a,a+n);
       sort(b,b+m);
       int i=0,j=0;
       while(i < n && j < m){
          if(a[i]<b[j]){
              i++;
          }
          else if(b[j]<a[i]){
              j++;
          }
          else if(a[i]==b[j]) {
              printf("%d  ",a[i]);
              i++;
              j++;
          }
      }
      return 0;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    ob.doUnion(a, n, b, m);
	    
	}
	
	return 0;
} 