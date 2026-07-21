class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mxprft=0;
       int bestbuy= prices[0];
       for(int i=1; i<prices.size();i++){
       
        bestbuy= min(prices[i],bestbuy);
         if(prices[i]>bestbuy){
            mxprft= max(mxprft,prices[i]-bestbuy);
        }
       }
       return mxprft;
    }
};