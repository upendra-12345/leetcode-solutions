class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n= nums.size();
        int half= n/2;
        int count=0;
        long long totalSum=0 ;
        long long firstSum=0;
        
        // fistSum+ secondSum = totalSum
        // firstSum > secondSum(total-first)
        // 2*firstSum> totalSum
        for(int num:nums){
            totalSum += num;
        }
        for(int i=0;i<half;i++){
            firstSum += nums[i];

        }
        // Check all rotations
        for(int i=0;i<n;i++){
            if(2* firstSum > totalSum){
                count++;
            }
            // Slide the circular window
            firstSum -= nums[i];//remove the leftmost element from first halfSum
            firstSum += nums[(i+half)%n];// add upcoming element to the halfSum
        }

        
        return count;
        
    }
};