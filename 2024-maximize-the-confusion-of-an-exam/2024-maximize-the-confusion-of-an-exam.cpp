class Solution{
    public:
    int longestOnes(string nums, int k) {
        int n = nums.size();
        int l=0;
        int r=0;
        int res=0;
        unordered_map<char,int> mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp['T']>k && l<=r){
                mp[nums[l]]--;
                l++;
            }

            res=max(res,r-l+1);
            r++;

        }
        return res;

}

    int longestOnes1(string nums, int k) {
            int n = nums.size();
            int l=0;
            int r=0;
            int res=0;
            unordered_map<char,int> mp;
            while(r<n){
                mp[nums[r]]++;
                while(mp['F']>k && l<=r){
                    mp[nums[l]]--;
                    l++;
                }

                res=max(res,r-l+1);
                r++;

            }
            return res;

    }
    int maxConsecutiveAnswers(string str, int k){
        return max(longestOnes1(str,k) , longestOnes(str,k));
    }
};





