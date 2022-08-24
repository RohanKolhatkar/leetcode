class Solution{
public:
    int threeSumClosest(vector<int>& nums, int target) 
{
    int n = nums.size();
    // we can sort the array as here the sum is required no keeping of index is required not 
    // do we need to keep track of any subarray.
    sort(nums.begin(), nums.end());
    
    int res = 0; // this is actally our result.
    int min_diff = INT_MAX;
    
    for(int i = 0; i < n - 2; i++)
    { // we fixed one i then traverse through the array from i+1 to n-1.
        int j = i + 1;
        int k = n - 1;
        
        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(target - sum) < min_diff)
            {
                min_diff = abs(target - sum);
                res = sum;
            }
            if(sum > target)
                k--;
            else 
                j++;
        }
    }
    
    return res;
}
};
