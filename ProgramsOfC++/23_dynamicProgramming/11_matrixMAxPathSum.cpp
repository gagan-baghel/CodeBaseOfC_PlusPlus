int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int dp[n][m];
    vector<int> prev(m,0);
    for(int i=0;i<m;i++) prev[i]= matrix[0][i];
    for(int i=1;i<n;i++){
        vector<int> curr(m,0);
        for(int j=0;j<m;j++){
           int cd= matrix[i][j]+prev[j];
            int ld=matrix[i][j];
            int rd= matrix[i][j];
           if(j-1>=0) ld+=prev[j-1];
            else ld+=-1e9;
           if(j+1<m) rd+= prev[j+1];
            else rd+=-1e9;
           curr[j]=max (cd,max(ld,rd));
        }
        prev=curr;
    }
    int maxi = -1e9;
    for(int i=0;i<m;i++) maxi = max(maxi,prev[i]);
    return maxi;
}
