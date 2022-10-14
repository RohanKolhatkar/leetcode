// Epicalyx

// 477
// Last Edit: November 10, 2021 10:22 AM

// Read More
// Since, you can hold only 1 stock at a time. The problem becomes really simple. Just add up the differences between two consecutive days (if profitable).

// Here, you might intuitively think that, holding for more days might yield more profit in some cases. But, after some debugging with pen and paper, you will see that's not the case.

// C++ Solution (4ms) :


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        
        for (int i=1; i<n; ++i) {
            if(prices[i] > prices[i-1])
                profit += prices[i]-prices[i-1];
        }
        
        return profit;
    }
};