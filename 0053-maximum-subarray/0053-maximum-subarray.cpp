class Solution {
public:
    //kadanes algorithm.
    // int maxSubArray(vector<int>& nums) {
    //     int maxSum = nums[0], curr = 0, i=0;
    //     for (int i=0; i<nums.size(); i++){
    //         curr+=nums[i];
    //         maxSum = max(curr, maxSum);
    //         curr = max(curr, 0);
    //     }
    //     return maxSum;
    // }
    
    
    
     int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+= nums[i];
            maxi= max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
        
    }
};

