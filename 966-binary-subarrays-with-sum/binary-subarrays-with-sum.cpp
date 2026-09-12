class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       unordered_map<int,int > freq;
       freq[0]= 1;
        int count=0;
        int sum=0;
        for(int num: nums){
            sum += num;
            if(freq.count(sum-goal)){
                count += freq[sum-goal];
            }
            freq[sum]++;
        }
        
        return count;
        
    }
};