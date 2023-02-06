long long findMinDiff(vector<long long> a, long long n, long long m){
    long long int   result=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i+m<=n;i++){
        result=min(result,a[i+m-1]-a[i]);
    }
    return result;
    }   