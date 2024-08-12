class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; // Handle edge case where prices array is empty
        
        int minPrice = prices[0]; // Initialize the minimum price to the first element
        int maxProfit = 0; // Initialize max profit to 0
        
        for (int i = 1; i < prices.size(); i++) {
            // Update minPrice if the current price is lower
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate profit if we sold at the current price
            int profit = prices[i] - minPrice;
            
            // Update maxProfit if this profit is higher than the previous maxProfit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        
        return maxProfit; // Return the maximum profit found
    }
};
