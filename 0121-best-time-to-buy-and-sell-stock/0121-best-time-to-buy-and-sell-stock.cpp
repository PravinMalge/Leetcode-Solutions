class Solution {
public:
    void maxProfitFinder(vector<int>& prices, int i, int&minPrice, int&maxProfit){
        //Base Case
        if(i == prices.size()) return;

        //Solution
        if(prices[i] < minPrice) minPrice = prices[i];
        int todaysProfit = prices[i] - minPrice;
        if(todaysProfit > maxProfit) maxProfit = todaysProfit;

        //RE
        maxProfitFinder(prices, i+1, minPrice, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices, 0, minPrice, maxProfit);

        return maxProfit;


    // Iterative solution
    //   int maxProfit = 0;
    //   int minPrice = prices[0];

    //   for(int i = 1; i <  prices.size(); i++)
    //   {
    //         if(prices[i] > minPrice)
    //         {
    //             maxProfit = max(maxProfit, prices[i] - minPrice);
    //         }
    //         minPrice = min(minPrice, prices[i]);
    //   }  

    //      return maxProfit;
    }
};