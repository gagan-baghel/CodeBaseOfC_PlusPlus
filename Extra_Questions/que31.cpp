int smallestSubWithSum(int arr[], int n, int x)
    {
        int start=0,end=0,ans=n,sum=0;
        while(end<n){
            while(sum<=x && end<n){
                sum += arr[end++];
            }
            while(sum>x && start<n ){
                if(end-start<ans){
                    ans = end - start;
                }
                sum-=arr[start++];
            }
        }
    }