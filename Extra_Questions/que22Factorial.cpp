class Solution {
public:              
    vector<int> factorial(int N){
               vector<int> result;
        result.push_back(1);
        for(int i=2;i<=N;i++){
            int carry=0;
            for(int j=result.size()-1;j>=0;j--){
                int curvalue = (result[j]*i)+carry;
                result[j]=curvalue%10;
                carry= curvalue/10;
            }
            while (carry>0){
                result.insert(result.begin(),carry%10);
                carry /=10;
                
            }
            
        }
        return result;
    }
    
    
};