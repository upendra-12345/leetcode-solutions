class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long  mod= 1e9+7;
        int sum=0;
        long long  ans=0;
        int countev=1;
        int countodd=0;
        for(auto const & v:arr){
            sum += v;
            if(sum %2 !=0){
                countodd++;
                ans += (countev% mod)%mod;
            }else{
                countev++;
                ans += (countodd % mod)%mod;
            }



        }
        return ans%mod;
        
    }
};