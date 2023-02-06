
    int ans =1;
    for(int i=0;i<n;i++){
        
        int num=0,temp=0,rev=0;
        temp = a[i];
        while(temp!=0){
            num = temp%10;
            rev = rev*10+num;
            temp/=10;
        }
        if(a[i]!=rev){
            return 0;
        }
        
        
    }
    return ans;