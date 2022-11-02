class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        vector<vector<int>> ans;
        
        sort(a.begin(), a.end());
        
        for(int i = 0; i < n-2; i++){
            if ((i != 0) && a[i] == a[i - 1]) continue;
            int j = i+1, k = n-1;
            while(k > j){
                if(a[i]+a[j]+a[k] == 0){
                    ans.push_back({a[i],a[j],a[k]});
                    j++;
                    k--;
                }
                else if(a[i]+a[j]+a[k] > 0) k--;
                else j++;
            } 
        }
        
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        return ans;
    }
};