class Solution {
public:
    bool canAliceWin(int n) {
        int take= 10;
        int k=0;

        while(n>=take){
            n-=take;
            take--;
            k++;
        }

        if(k%2 !=0){// odd count returns alice turns
            return true;
        }else{
            return false;
        }

        
    }
};