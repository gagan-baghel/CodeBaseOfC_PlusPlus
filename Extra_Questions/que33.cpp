//code 1
int mink=0,grek=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            mink++;
        }
    }
    for(int j=0;j<mink;j++){
        if(arr[j]>k){
            grek++;
        }
    }
    int i=0,j=mink,res=INT_MAX;
    res=min(res,grek);
    while(j<n){
         if(arr[i]>k)
       {
           grek--;
       }
       if(arr[j]>k)
       {
           grek++;
       }
       res=min(res,grek);
        i++;
        j++;
    }
    return res;

//code 2
int mink=0,grek=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            mink++;
        }
    }
    for(int j=0;j<mink;j++){
        if(arr[j]>k){
            grek++;
        }
    }
    int i=0,j=mink,res=grek;
    //res=min(res,grek);
    while(j<n){
         if(arr[i]>k)
       {
           grek--;
       }
       if(arr[j]>k)
       {
           grek++;
       }
       res=min(res,grek);
        i++;
        j++;
    }
    return res;



//code 3

int mink=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]<=k)
       {
           mink++;
       }
   }
   int grek=0;
   for(int i=0;i<mink;i++)
   {
       if(arr[i]>k)
       {
           grek++;
       }
   }
   int res=INT_MAX;
   res=min(res,grek);
   for(int i=mink;i<n;i++)
   {
       if(arr[i-mink]>k)
       {
           grek--;
       }
       if(arr[i]>k)
       {
           grek++;
       }
       res=min(res,grek);
   }
   return res;
}

