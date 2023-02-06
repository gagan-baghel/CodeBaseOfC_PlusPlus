// int f(int i,int j,vector<vector<int>>& triangle, int n,vector<vector<int>> &dp){
//     if(i==n-1) return dp[i][j]=triangle[i][j];
//     if(i>n-1 or j>n-1) return 1e9;
//     if(dp[i][j]!=-1)return dp[i][j];
//     else{
//     int down = triangle[i][j]+f(i+1,j,triangle,n,dp);
//     int digri = triangle[i][j]+f(i+1,j+1,triangle,n,dp);
//     return dp[i][j]=min(down,digri);}
// }

int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++) dp[n-1][i]=triangle[n-1][i];
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int down = triangle[i][j]+ dp[i+1][j];
    		int digri = triangle[i][j]+dp[i+1][j+1];
    	    dp[i][j]=min(down,digri);    
        }
    }
    return dp[0][0];
// 	return f(0,0,triangle,n,dp);
}