int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int profit=0;
    int mini=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        int cost=prices[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,prices[i]);
    }
    return profit;
}