class Solution {
public:
    int minOperations(string s) {
        int n= s.size();
        char mx= s[0];
        char mn= s[0];
        int sorted=1;
        for(int i=1;i<n;i++){
            if(s[i-1]> s[i]){
                sorted=0;
            }

            if(mx < s[i]){
                mx= s[i];
            }
            if(mn > s[i]){
                mn= s[i];
            }

        }
        if(sorted){
            return 0;
        }
        if(n==2){
            return -1;
        }

        if(mn== s[0]|| mx== s[n-1]){
            return 1;
        }

        for(int i=1;i<n-1;i++){
            if(mn== s[i]|| mx== s[i]){
                return 2;
            }
        }
        return 3;

        
    }
};