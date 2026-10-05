class Solution {
public:
   
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(char ch: s){
            if(ch== '('){
                st.push(0);
            }else{
                
                int top= st.top();
                st.pop();
                int count=0;
                if(top== 0){
                    count=1;
                }else{
                    count= 2*top;
                }

                st.top() += count;
            }
        }
        return st.top();
       
        
    }
};