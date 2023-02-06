void rearrange(int arr[], int n)
{ 
    vector<int > posi,negi;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            posi.push_back(arr[i]);
        }
        else{
            negi.push_back(arr[i]);
        }
    }
    int psiz=posi.size(),nsiz=negi.size();
    int i=0,j=0,k=0;
    while(i<psiz||j<nsiz){
        if(i<psiz){
            arr[k++]=posi[i];
            i++;
        }
        if(j<nsiz){
            arr[k++]=negi[j];
            j++;
        }
    }
    
    
}