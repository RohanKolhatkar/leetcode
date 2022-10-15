class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ansmap;
        for(string s:strs)
        {
            string st=s;
            sort(st.begin(),st.end());
            ansmap[st].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i:ansmap)
            ans.push_back(i.second);
        return ans;
    }
};








