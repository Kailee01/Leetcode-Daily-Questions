class Solution {
public:
    int maxProfit(vector<int>& prices){
     int n=prices.size();
        // Bf is all pair and find the maximum profit you can make by these n^2 pars.
        if(n==0)return 0;
        int min_stock=prices[0];
        int max_stock=min_stock;
        int max_profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>min_stock)max_stock=prices[i];
            else 
            min_stock=min(min_stock,prices[i]),max_stock=prices[i];
            
            max_profit=max(max_profit,max_stock-min_stock);
        }
        return max_profit;
    }
};