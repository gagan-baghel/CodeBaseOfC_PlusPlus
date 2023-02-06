
bool find3Numbers(int a[], int n, int X)
    {
    sort(a, a + n);
    for(int i=0;i<n;i++){
        int first = a[i];
        int j=i+1,k=n-1;
        while(j<k){
            int sum =first+a[j]+a[k];
            if(sum==X){
                return true;
            }
            if(sum<X){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return false;
}