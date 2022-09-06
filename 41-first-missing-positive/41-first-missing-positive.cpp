// class Solution {
// public:
//     int firstMissingPositive(vector<int>& arr) {
//         // its totally my approch not even seen anything.
// //         int n = arr.size();
// //         //index of positive number in array
// //         sort(arr.begin() , arr.end());
// //         //case when some positive integer present hai array me.
// //         int ipov; // index of positive intger.
// //         int j= 1;
// //         for(int i=0; i<n;i++){
// //             if(arr[i] >0){
// //                 ipov = i;
// //                 break;
// //             }
            
// //             else{
// //                 ipov = 1;
// //                 return 1;
// //             }
// //         }
        
        
// //         //check the array with positive integers like match 1 is there or not
// //         int ans;
// //         for(int i=ipov; i<n; i++){
// //             if(arr[i]!=j){
// //                 ans = j;
// //                 break;
                
// //             }
// //             else{
// //                 ans = arr[n-1] +1;
// //             }
            
            
// //         }
        
// //         return ans;
    
        
        
//     }
// };


class Solution {
public: 
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 0; i < n; i++)
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        for (int i = 0; i < n; i++)
            if (nums[i] != i + 1)
                return i + 1;
        return n + 1;
    }
};