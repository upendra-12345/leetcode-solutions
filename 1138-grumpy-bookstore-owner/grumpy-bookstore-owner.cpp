class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n= customers.size();
        int count =0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                count+= customers[i];
            }

        }

        // check for first window of minutes size
        int window=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                window += customers[i];
            }
        }
        // slide window
        int extra= window;
        for(int i= minutes;i<n;i++){
            // add new element 
            if(grumpy[i]==1){
                window += customers[i];
            }

            // remove leftmost element
            if(grumpy[i-minutes]==1){
                window -= customers[i-minutes];
            }
            extra= max(extra,window);
        }
        return count+ extra;
        
    }
};