class Solution {
public:
    bool isValid(string s) {
        string  st;
        for(char ch: s){
            st+=ch;

            if(st.size()>=3 && st.substr(st.size()-3) == "abc"){
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }
        return st.empty();

        
    }
};