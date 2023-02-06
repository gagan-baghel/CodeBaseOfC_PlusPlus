#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int f(int n ,vector<int> &dp){ if(n<=1) return dp[n]=n;
	if(dp[n]!=-1) return dp[n];
	return dp[n]= f(n-1,dp) + f(n-2,dp);   //memo 
	}

int32_t main(){
	int n; cin>>n; 
	vector<int>dp(n+1,-1);
	cout<<f(n,dp)<<endl;
	for (auto i : dp) cout << i << ' ';cout<<endl;
	int prev=1,prev2=0,ans;
	for (size_t i = 2; i <= n; i++)
	{	ans = prev+prev2;
		prev2=prev;     // tabular with space effencicy
		prev=ans;
		}
	cout<<ans;
	return 0;
}