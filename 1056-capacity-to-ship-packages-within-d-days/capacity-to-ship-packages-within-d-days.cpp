class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        
        int left= *max_element(weights.begin(),weights.end());// min possible capacity
        int right= accumulate(weights.begin(),weights.end(),0);// max capacity

        while(left<= right){
            int k= left+(right-left)/2;

            int day=1;
            int currweight=0;

            for(int weight:weights){
                if(currweight + weight> k){
                    day++;// move to next day
                    currweight=0;// new day
                }
                currweight +=weight; // package ship
            }
            if(day <=days){ // valid capacity
                right=k-1;
            }else{
                left= k+1; // invalid capacity
            }
        }
        return left;
        
    }
};