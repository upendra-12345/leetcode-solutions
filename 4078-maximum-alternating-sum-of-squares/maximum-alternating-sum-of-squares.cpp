class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        long long max=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            nums[i]= nums[i]* nums[i];

        }
        sort (nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            
            max -= nums[i];
        }
        for(int i=n/2;i<n;i++){
            
            max += nums[i];
        }
        
        return max;
    }
};