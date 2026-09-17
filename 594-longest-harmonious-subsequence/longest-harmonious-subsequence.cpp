class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int maxlength=0;
        int left =0;

        for(int right=0;right<nums.size();right++){

            while(nums[right]-nums[left]>1){
                left++;
            }

            if(nums[right]- nums[left]==1){
                maxlength= max(maxlength, right-left+1);
            }
        }
        return maxlength;

    }
};