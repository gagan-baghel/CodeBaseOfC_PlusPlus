
	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int>p;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            p.push_back(arr[i]);
	        }
	    }
	    return p;
	}