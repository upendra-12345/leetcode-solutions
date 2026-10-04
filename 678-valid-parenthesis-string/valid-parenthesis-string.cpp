class Solution {
public:
    bool checkValidString(string s) {
       int st=0;
       int end=0;

       for(char ch:s){
            if(ch== '('){
               st++;
                end++;
            }else if(ch==')'){
                st--;
                end--;
            }else{
                st--;
                end++;
            }

            if(end<0){
                return false;
            }

            if(st <0){
                st=0;
            }
        }

        return st==0;
        
    }
};