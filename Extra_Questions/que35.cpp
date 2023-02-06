class Solution
{
	{
public:
	public:
		int find_median(vector<int> v)
		{int n;
		int ans;
		sort(v.begin(),v.end());
		//cout<<5/2;
		if(v.size()==1){
		    return v[0];
		}
		   // sort(v.begin(),v.end());
		    if(v.size()%2==0){
		        n = v.size()/2;
		        return (v[n-1]+v[n])/2;
		        
		    }
		    else{
		        n = v.size()/2;
		        return v[n];
		    }
		}

	};