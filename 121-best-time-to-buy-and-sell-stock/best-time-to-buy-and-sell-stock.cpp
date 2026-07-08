class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;int minprice=INT_MAX;
        for(int p:prices){
            minprice=min(minprice,p);
            maxprofit=max(maxprofit,p-minprice);
        }
        return maxprofit;
    }
};