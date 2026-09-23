/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low= 1;
        int high= n;
        while(low<= high){
            int mid = low +(high-low)/2;

            int guessNum= guess(mid);

            if(guessNum == 0){// guessnum is equals to num
                return mid;
            }else if(guessNum == -1){ // guessNUm is higher than num
                high= mid-1;
            }else{
                low= mid +1; // guessNum is less than num
            }

        }
        return -1;
        
        
    }
};