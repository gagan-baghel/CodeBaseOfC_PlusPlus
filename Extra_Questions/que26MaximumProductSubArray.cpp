#define ll long long int 
class Solution{
public:

// Function to find maximum product subarray
long long maxProduct(vector<int> arr, int n) {
    ll maxi = 1; 
    ll mini = 1; 
    ll ans = 0;
    for(int i =0 ; i<n ; i++){
        ll x=arr[i];
        if(x<0)
        swap(mini , maxi);
        maxi = max(x , x*maxi);
        mini = min(x, x*mini);
        ans = max(ans,maxi);
        
    }
    return ans ;
}
};