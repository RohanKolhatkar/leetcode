// the logic here is to use that the anagrams that are taken if we will sort the anagrams they will become the ssame string and if they are same after sorted that means thay are angram of each other.
// do not use the basic of logic of putting in a ordered hashmap and checking all with one fixed that wount work here what we do in a checking ermutation or anagram question.
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











