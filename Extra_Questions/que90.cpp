
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans(2);
    int i=0; int j = n-1;
    while(i <= j) {
        if(arr[i] != x) {
            i++;
        }
        if(arr[j] != x) {
            j--;
        }
        if(arr[i] == x && arr[j] == x) {
            ans[0] = i; ans[1] = j;
            break;
        }
        if(i==j){
            j=-1;
        }
    }
    
    if(i > j) return {-1,-1};
    return ans;
}