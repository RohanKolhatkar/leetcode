class Solution {
public:
//     int func(vector<int> &dp, int ind, int prev , vector<int> &nums, int target){
//         int n = nums.size();
//         if(ind>=nums.size() ) return 0;
//         if(ind == nums.size() -1) return dp[n];
//         if(dp[ind] != -1) return dp[ind];
        
//         for(int i= ind+1; i<nums.size(); i++){
//             // int count=0;
//             if(nums[ind] - prev <= target && nums[ind]-prev >= (-target)){
//                 //available hai matlab..
//                 dp[ind] += 1 + dp[prev];
//                 func(dp,ind+1,nums[ind],nums,target);
//             }
//             else{
//                 func(dp,ind+1,prev,nums,target);
//             }
//         }
//         return dp[n];
        
//     }
    int maximumJumps(vector<int>& nums, int target) {
        // int n = nums.size();
        // if(target ==0) return 0;
        // vector<int>res;
        // int count=0;
        // for(int i=1; i<n;i++){
        //     int a = nunms[i] - nums[i-1];
        //     if(a<= target || a >= (-target)){
        //         count++;
        //     }
        // }
        // return count;
        
        // int prev = nums[0];
        // vector<int>res;
        // res.push_back(nums[0]);
        // for(int i=1; i<n; i++){
        //     if(nums[i] - prev  <= target && nums[i]-prev >= (-target)){
        //         res.push_back(nums[i]);
        //         prev = nums[i];
        //     }
        // }
        // for(auto x: res){
        //     cout<<x<<" ";
        // }
        // cout<<"\n";
        // if(res.back() != nums[n-1]) return -1;
        // return res.size()-1;
        // vector<int>dp(n+1,-1);
        // dp[nums[0]] = 0;
        // func(dp,0,nums[0],nums,target);
        // return dp[n];
        
        int n = nums.size();
        vector<int>dpp(n);
        
        for(int i = n-2; i>=0; i--){
            int maxi =0;
            int temp =0;
            //declaring the temp here
            for(int j = i+1; j<n; j++){
                if(nums[j]-nums[i] <= target && nums[j]-nums[i]>=(-target) ){
                     if (j>= n-1){
                        if(maxi < 1){
                            maxi = 1;
                            temp = 1;
                        }
                    }
                    else if(j< n-1){
                        if(dpp[j] >maxi) {
                            maxi = dpp[j];
                        }
                    }
                    // else
                }
            }
            //agar temp 1 hota hai to aisa hoga na
            if(temp == 1){
                dpp[i] =1;

            }
            
            else if(maxi > 0){
                dpp[i] = maxi +1;
            }
        }
        
        if(dpp[0]>0) {int res = dpp[0]; return res;};
        return -1;
    }
};