class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1= INT_MIN;
        int sell1=0;

        int buy2= INT_MIN;
        int sell2=0;
        // BUY1-> SELL1, BUY2->SELL2;
        for(int price:prices){
            buy1= max(buy1, -price);//maxProfit if buy at min price 
            sell1= max(sell1,buy1+price);// maxProfit if sell at max price

            buy2= max(buy2, sell1-price);
            sell2= max(sell2, buy2+price);
        }
        return sell2;
        
    }
};