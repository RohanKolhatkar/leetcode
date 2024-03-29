

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int len = INT_MAX;
        int left = 0, right = 0,sum = 0;
        
        while (right < nums.size()){
            sum += nums[right++];
            while (sum >= target){
                len = min(len, right - left);
                sum -= nums[left++];
            }
        }
        return (len < INT_MAX) ? len : 0;
    }
};