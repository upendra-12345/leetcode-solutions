class Solution {
public:
    int minRotations(string s) {
        int rotation=0;
        int prev=0;
        for ( char ch: s){
            int dig= ch-'0';

            int diff = abs(dig-prev);
            prev= dig;
            rotation += min(diff, 10-diff);

           

        }
        return rotation;
    }
};