class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int f1[26]={0};
        int f2[26]={0};

        int k= s1.size();
        int n= s2.size();
        
        for(char c: s1){
            f1[c-'a']++;
        }
        for(int i=0;i<n;i++){
            f2[s2[i]-'a']++;

            if(i>=k){
                f2[s2[i-k]-'a']--;
            }
            bool same= true;
            for(int i=0;i<26;i++){
                if(f1[i]!= f2[i]){
                    same= false;
                    break;
                }
            }
            if(same){
                return true;
            }
        }
        return false;
        

        
    }
};