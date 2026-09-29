class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high= *max_element(quantities.begin(),quantities.end());

        while(low <= high){
            int mid= low+ (high-low)/2;

            int store=0;
            for(int x:quantities ){
                store += (x + mid-1)/mid;
            }

            if(store <= n){
                high= mid-1;
            }else{
                low= mid+1;
            }



        }
        return low;
        
    }
};