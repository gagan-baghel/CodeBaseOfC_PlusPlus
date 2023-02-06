class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
	sort(arr,arr+n);
        int ans = arr[n-1]-arr[0];
        int s = arr[0]+k;
        int l = arr[n-1]-k;
        int mine,maxe;
        
        for(int i=0;i<n-1;i++){
            
            mine = min(s,arr[i+1]-k);
            maxe = max(l,arr[i]+k);
            if(mine<0) continue;
            ans = min(ans,maxe-mine);
        }
        return ans;
    }
};