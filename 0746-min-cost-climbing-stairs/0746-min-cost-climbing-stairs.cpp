// Recurrence Relation:
// // mincost(i) = cost[i]+min(mincost(i-1), mincost(i-2))
// // Base cases:
// // mincost(0) = cost[0]
// // mincost(1) = cost[1]


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2; i<n; i++){
            dp[i] = min(dp[i-1],dp[i-2]) +cost[i];
        }
        
        return min(dp[n-1],dp[n-2]);

        
    }
};


   // cost wale problems.
// simpley just the cost gets added
