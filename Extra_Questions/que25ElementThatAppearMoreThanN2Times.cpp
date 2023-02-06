class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
       map <int,int> g;
       int count=0;
       for(int i=0;i<n;i++){
           g[arr[i]]++;
       }
       int x=n/k;
       for(int i=0;i<g.size();i++){
           if(g[i]>n/k){
               count++;
           }
    }
    return count;}
    
};