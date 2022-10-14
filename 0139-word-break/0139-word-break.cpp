class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        vector<bool> dp(s.size(),0);
        // for(int i=0;i<s.size();i++)
        // {
        //     string temp="";
        //     for(int j=i;j<s.size();j++)
        //     {
        //         temp+=s[j];
        //         if(st.find(temp)!=st.end())
        //         {
        //             //cout<<temp<<" ";
        //             if(i==0)
        //             {
        //                 dp[j]=1;
        //             }
        //             else
        //             {
        //                 dp[j]=dp[i-1] or dp[j];
        //             }
        //         }
        //     }
        // }
        for (int i = 0; i < s.size(); i++)
{
    if (i > 0 && !dp[i - 1]) continue;

    std::string temp = "";
    for (int j = i; j < s.size(); j++)
    {
        temp += s[j];
        if (st.find(temp) != st.end())
        {
            dp[j] = 1;                    
        }
    }
}
        
        return dp[s.size()-1];
    }
};