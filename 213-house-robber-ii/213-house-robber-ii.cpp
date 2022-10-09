class Solution {
public:
    int helper(vector<int>& nums) {
        int n=nums.size();
        // if(n==1) return nums[0];
        // if(n==2) return max(nums[0], nums[1]);
        
        int prev2=nums[0];
        int prev1=max(nums[0], nums[1]);
        
        for(int i=2; i<n; i++){
            int curr=max(prev1, prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        if(n==3) return max(max(nums[0], nums[1]),nums[2]);
        vector<int> not_first={nums.begin()+1, nums.end()};
        vector<int> not_last={nums.begin(), nums.end()-1};
        
        return max(helper(not_first), helper(not_last));
    }
};