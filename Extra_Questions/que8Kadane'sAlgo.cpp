int sum =0,max=0;    //Rewrite//
       for(int i=0;i<n;i++){
           sum = sum + arr[i];
           
           if (sum>max){
               max = sum;
           }
           if(sum<0){
               sum=0;
           }
       }
        return max;